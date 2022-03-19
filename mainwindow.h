#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Button_tg_en_clicked();

    void on_Button_tg_es_clicked();

    void on_Button_report_bug_clicked();

    void on_Button_package_request_clicked();

    void on_Button_contact_clicked();

    void on_Button_support_donate_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
