#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() : width(0), height(0) {}

Rectangle::Rectangle( int width, int height ) : width(width), height(height) {}

void Rectangle::draw() const{
  cout << "Drawing a rectangle..." << endl;
}

int Rectangle::getArea() const{
  return width * height;
}

void Rectangle::setWidth( int width ){
  this->width = width;
}

void Rectangle::setHeight( int height ){
  this->height = height;
}

int Rectangle::getWidth() const{
  return width;
}

int Rectangle::getHeight() const{
  return height;
}