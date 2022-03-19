#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Button_tg_en_clicked()
{
    QProcess::execute("termux-open-url https://telegram.me/termux24x7");
}

void MainWindow::on_Button_tg_es_clicked()
{
    QProcess::execute("termux-open-url https://t.me/termux_es");
}

void MainWindow::on_Button_report_bug_clicked()
{
    QProcess::execute("termux-open-url https://github.com/Yisus7u7/termux-desktop-lxqt/issues/new/choose");
}

void MainWindow::on_Button_package_request_clicked()
{
    QProcess::execute("termux-open-url https://github.com/termux/x11-packages/issues/new/choose");
}

void MainWindow::on_Button_contact_clicked()
{
    QProcess::execute("termux-open-url https://t.me/Yisus7u7v");
}

void MainWindow::on_Button_support_donate_clicked()
{
    QProcess::execute("termux-open-url https://paypal.me/JesusChapman");
}
