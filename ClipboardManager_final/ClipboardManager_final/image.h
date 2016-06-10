#ifndef IMAGE_H
#define IMAGE_H

#include <QClipboard>
#include <QtCore>
#include <QApplication>
#include <QPixmap>

class Image
{
public:
    Image(QImage image, QImage thumbnail, int size, int dimX, int dimY);
    int size;
    int dimX;
    int dimY;
    QImage image;
    QImage thumbnail;
};

#endif // IMAGE_H
