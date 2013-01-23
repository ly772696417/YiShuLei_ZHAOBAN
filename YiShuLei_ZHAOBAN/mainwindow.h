#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTSql>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

    QSqlDatabase db;
    QSqlQuery *sqlQuery;
    QSqlRecord sqlRecord;

    QString m_bmxh;
private slots:
    void on_pushButton_search_clicked();
    void on_pushButton_register_clicked();

    void connectDB();
    void queryDB();
    bool updateDB();
};

#endif // MAINWINDOW_H
