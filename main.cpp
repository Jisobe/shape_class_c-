#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include <vector>
#include <memory>
#include <iostream>
using namespace std;

void showShape(Shape& shape){
  shape.draw();
}

int main(void){

  Shape shape1;
  Circle circle1;
  Rectangle rectangle1;

  showShape(shape1);
  showShape(circle1);
  showShape(rectangle1);

  cout << endl << "Vector of shape pointers" << endl;

//Regular pointers
  vector<Shape*> shapes;
  Circle* circlePtr;
  Rectangle* rectanglePtr;

  circlePtr = new Circle;
  shapes.push_back(circlePtr);
  rectanglePtr = new Rectangle;
  shapes.push_back(rectanglePtr);

  for (unsigned int i = 0; i < shapes.size(); i++) {
    showShape(*(shapes.at(i)));
  }

  delete circlePtr;
  delete rectanglePtr;

  cout << endl << "Vector of unique shape pointers" << endl;

//Smart pointers
  vector<unique_ptr<Shape> > shapes2;
  unique_ptr<Circle> circlePtr2(new Circle);
  shapes2.push_back(std::move(circlePtr2));
  unique_ptr<Rectangle> rectanglePtr2(new Rectangle);
  shapes2.push_back(std::move(rectanglePtr2));

  for (unsigned int i = 0; i < shapes2.size(); i++) {
    showShape(*(shapes2.at(i)));
  }

  return 0;
}