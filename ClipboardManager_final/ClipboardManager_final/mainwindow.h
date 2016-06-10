#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QClipboard>
#include <QtCore>
#include <QApplication>
#include <QMenu>
#include <QMenuBar>
#include <QPixmap>
#include <QList>
#include <iostream>
#include <string>
#include <sstream>
#include <QSystemTrayIcon>
using namespace std;


class QAction;
class QMenu;
namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
    void closeEvent(QCloseEvent *event);

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void signalClipboardHandling();

    void on_copy1_clicked();

    void on_copy2_clicked();

    void on_copy3_clicked();

    void on_copy4_clicked();

    void on_copy5_clicked();

    void on_textCopy_1_clicked();

    void on_textCopy_2_clicked();

    void on_textCopy_3_clicked();

    void on_textCopy_4_clicked();

    void on_textCopy_5_clicked();

    void on_textCopy_6_clicked();

    void on_textCopy_7_clicked();

    void on_textCopy_8_clicked();

    void on_textCopy_9_clicked();

private:
    Ui::MainWindow *ui;
    void createActions();
    void createTrayIcon();
    QAction *restoreAction;
    QAction *quitAction;
    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;

};

#endif // MAINWINDOW_H
