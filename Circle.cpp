#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() : radius(0.0) {}

Circle::Circle(float radius) : radius(radius) {}

void Circle::setRadius(float radius){
  this->radius = radius;
}

float Circle::getRadius() const{
  return radius;
}

float Circle::getArea() const{
  return 3.14 * radius * radius;
}

void Circle::draw() const{
  cout << "Drawing a circle..." << endl;
}