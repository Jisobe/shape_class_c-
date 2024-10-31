#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() : width(0), height(0) {}

Rectangle::Rectangle( int width, int height ) : width(width), height(height) {}

void Rectangle::draw() const{
  cout << "Drawing a rectangle...";
}

int Rectangle::getArea() const{
  return width * height;
}