#include "Shape.h"
#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() : radius(0.0) {
  
}

Circle::Circle(float radius) : radius(radius) {

}

void Circle::setRadius(float radius){
  this->radius = radius;
}

float Circle::getRadius() const{

}

float Circle::getArea() const{

}

void Circle::draw() const{
  cout << "Drawing a circle..." << endl;
}