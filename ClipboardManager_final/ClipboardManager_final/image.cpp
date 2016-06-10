#include "image.h"

Image::Image(QImage image,QImage thumbnail, int size, int dimX, int dimY){
    this->size = size;
    this->dimX = dimX;
    this->dimY = dimY;
    this->image = image;
    this->thumbnail = thumbnail;
}

