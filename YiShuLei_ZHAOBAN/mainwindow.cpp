#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{    
    ui->setupUi(this);
    ui->lineEdit_province->setReadOnly(true);
    ui->lineEdit_name->setReadOnly(true);
    ui->lineEdit_sex->setReadOnly(true);
    connectDB();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_search_clicked()
{
    queryDB();
}

void MainWindow::on_pushButton_register_clicked()
{
    updateDB();
}

void MainWindow::connectDB()
{
    db = QSqlDatabase::addDatabase("QODBC");
    QString dsn = QString("DRIVER={Microsoft Access Driver (*.mdb)};FIL={MS Access};DBQ=艺术类.mdb");
    db.setDatabaseName(dsn);
    bool ok = db.open();

    if(true == ok){
        qDebug() << "Database connection built.";
        sqlQuery = new QSqlQuery(db);
    }
    else{
        qDebug() << "Database connection failed.";
    }
}

void MainWindow::queryDB(){
    m_bmxh = ui->lineEdit_bmxh->text();
    QString sql = "select UID,SYSQ,XM,XBMC from dbo_LQJG_ARTIST where BMXH="+m_bmxh+";";
    sqlQuery->exec(sql);
    if(sqlQuery->first()){
        qDebug()<<sqlQuery->value(1).toString();
        ui->lineEdit_province->setText(sqlQuery->value(1).toString());
        qDebug()<<sqlQuery->value(2).toString();
        ui->lineEdit_name->setText(sqlQuery->value(2).toString());
        qDebug()<<sqlQuery->value(3).toString();
        ui->lineEdit_sex->setText(sqlQuery->value(3).toString());
    }
}

bool MainWindow::updateDB(){

    QString zykhStringLast = ui->lineEdit_zykh->text();
    QString zykhStringAll = "1311"+ zykhStringLast;

    QString sqlQue = "select ZYKH from dbo_LQJG_ARTIST";
    sqlQuery->exec(sqlQue);
    while(sqlQuery->next()){
        if(sqlQuery->value(0).toString() == zykhStringAll){
            QMessageBox::information(this,tr("错误"),tr("专业考号不能重复！"));
            return false;
        }
    }

    if("" == zykhStringLast){
        QMessageBox::information(this,tr("错误"),tr("专业考号不能为空！"));
        return false;
    }
    else{
        QString sqlUpa = "update dbo_LQJG_ARTIST set ZYKH = "+zykhStringAll+" where BMXH = "+ui->lineEdit_bmxh->text()+";";
        sqlQuery->exec(sqlUpa);
        QMessageBox::information(this,tr("正确"),tr("提交成功！"));
        return true;
    }

}
