#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "image.h"
#include "text.h"
#include <QtGui>

QList<Image*> images;
QList<Text*> texts;
bool flag=true;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createActions();
    createTrayIcon();
    trayIcon->show();
    connect(QApplication::clipboard(), SIGNAL(dataChanged()), this, SLOT(signalClipboardHandling()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event){
    if(trayIcon->isVisible()){
        hide();
        event->ignore();
    }
}

void MainWindow::createActions(){
    restoreAction = new QAction(tr("&restore"), this);
    connect(restoreAction, SIGNAL(triggered()), this, SLOT(showNormal()));
    quitAction = new QAction(tr("&exit"), this);
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
}

void MainWindow::createTrayIcon(){
    trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(restoreAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(quitAction);
    trayIcon = new QSystemTrayIcon(this);
    QIcon icon(":/icon/icon.png");
    trayIcon->setIcon(icon);
    trayIcon->setContextMenu(trayIconMenu);
}


void MainWindow::signalClipboardHandling()
{
    QClipboard *clip = QApplication::clipboard();
    const QMimeData *mime = clip->mimeData();

    if(mime->hasImage()){
        QImage img = qvariant_cast<QImage>(mime->imageData());
        QImage result = img.scaled(150, 100, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        int dimY = img.height();
        int dimX = img.width();
        int size = img.byteCount();

        Image *temp = new Image(img, result, size, dimX, dimY);
        if(flag){
            images.push_front(temp);
        }
        if(images.size() > 5){
            images.pop_back();
        }

        for (int i = 0; i < images.size(); i++){
            QPixmap map = QPixmap::fromImage(images.at(i)->thumbnail);
            QGraphicsScene* scene = new QGraphicsScene;
            scene->addPixmap(map);
            if (i == 0){
                ui->clipImage->setScene(scene);
                ui->imgDim->setText(QString::number(images.at(i)->dimX) + "x" + QString::number(images.at(i)->dimY));
                ui->imgSize->setText(QString::number(images.at(i)->size));
            }
            else if (i == 1){
                ui->clipImage_2->setScene(scene);
                ui->imgDim_2->setText(QString::number(images.at(i)->dimX) + "x" + QString::number(images.at(i)->dimY));
                ui->imgSize_2->setText(QString::number(images.at(i)->size));
            }
            else if (i == 2){
                ui->clipImage_3->setScene(scene);
                ui->imgDim_3->setText(QString::number(images.at(i)->dimX) + "x" + QString::number(images.at(i)->dimY));
                ui->imgSize_3->setText(QString::number(images.at(i)->size));
            }
            else if (i == 3){
                ui->clipImage_4->setScene(scene);
                ui->imgDim_4->setText(QString::number(images.at(i)->dimX) + "x" + QString::number(images.at(i)->dimY));
                ui->imgSize_4->setText(QString::number(images.at(i)->size));
            }
            else if (i == 4){
                ui->clipImage_5->setScene(scene);
                ui->imgDim_5->setText(QString::number(images.at(i)->dimX) + "x" + QString::number(images.at(i)->dimY));
                ui->imgSize_5->setText(QString::number(images.at(i)->size));
            }
        }
    }
    else{
        QString text = clip->text();

        Text *tex = new Text(text);

        if(flag){
            if(!texts.isEmpty()){
                if(!text.compare(texts.first()->text)==0){
                    texts.push_front(tex);
                }
            }
            else{
                texts.push_front(tex);
            }
        }

        if (texts.size() > 9){
            texts.pop_back();
        }

        for (int i = 0; i < texts.size(); i++){
            if(i == 0){
                ui->clipText->setText(texts.at(i)->text);
            }
            else if (i == 1){
                ui->clipText_2->setText(texts.at(i)->text);
            }
            else if (i == 2){
                ui->clipText_3->setText(texts.at(i)->text);
            }
            else if (i == 3){
                ui->clipText_4->setText(texts.at(i)->text);
            }
            else if (i == 4){
                ui->clipText_5->setText(texts.at(i)->text);
            }
            else if (i == 5){
                ui->clipText_6->setText(texts.at(i)->text);
            }
            else if (i == 6){
                ui->clipText_7->setText(texts.at(i)->text);
            }
            else if (i == 7){
                ui->clipText_8->setText(texts.at(i)->text);
            }
            else if (i == 8){
                ui->clipText_9->setText(texts.at(i)->text);
            }
        }
    }
    flag = true;
}


void MainWindow::on_copy1_clicked()
{
    if( images.size() >= 1){
        flag=false;
        QApplication::clipboard()->setImage(images.at(0)->image);
    }
}

void MainWindow::on_copy2_clicked()
{
    if( images.size() >= 2){
        flag=false;
        QApplication::clipboard()->setImage(images.at(1)->image);
    }
}

void MainWindow::on_copy3_clicked()
{
    if( images.size() >= 3){
        flag=false;
        QApplication::clipboard()->setImage(images.at(2)->image);
    }
}

void MainWindow::on_copy4_clicked()
{
    if( images.size() >= 4){
        flag=false;
        QApplication::clipboard()->setImage(images.at(3)->image);
    }
}

void MainWindow::on_copy5_clicked()
{
    if( images.size() >= 5){
        flag=false;
        QApplication::clipboard()->setImage(images.at(3)->image);
    }
}

void MainWindow::on_textCopy_1_clicked()
{
    if( texts.size() >= 1){
        flag=false;
        QApplication::clipboard()->setText(texts.at(0)->text);
    }
}

void MainWindow::on_textCopy_2_clicked()
{
    if( texts.size() >= 2){
        flag=false;
        QApplication::clipboard()->setText(texts.at(1)->text);
    }
}

void MainWindow::on_textCopy_3_clicked()
{
    if( texts.size() >= 3){
        flag=false;
        QApplication::clipboard()->setText(texts.at(2)->text);
    }
}

void MainWindow::on_textCopy_4_clicked()
{
    if( texts.size() >= 4){
        flag=false;
        QApplication::clipboard()->setText(texts.at(3)->text);
    }
}

void MainWindow::on_textCopy_5_clicked()
{
    if( texts.size() >= 5){
        flag=false;
        QApplication::clipboard()->setText(texts.at(4)->text);
    }
}

void MainWindow::on_textCopy_6_clicked()
{
    if( texts.size() >= 6){
        flag=false;
        QApplication::clipboard()->setText(texts.at(5)->text);
    }
}

void MainWindow::on_textCopy_7_clicked()
{
    if( texts.size() >= 7){
        flag=false;
        QApplication::clipboard()->setText(texts.at(6)->text);
    }
}

void MainWindow::on_textCopy_8_clicked()
{
    if( texts.size() >= 8){
        flag=false;
        QApplication::clipboard()->setText(texts.at(7)->text);
    }
}

void MainWindow::on_textCopy_9_clicked()
{
    if( texts.size() >= 9){
        flag=false;
        QApplication::clipboard()->setText(texts.at(8)->text);
    }
}
