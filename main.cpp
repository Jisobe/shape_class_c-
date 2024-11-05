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

//Regular pointer vector
  cout << endl << "Vector of shape pointers" << endl;

  vector<Shape*> shapes;

  shapes.push_back(new Circle);
  shapes.push_back(new Rectangle);

  for (const auto& shape : shapes) {
    showShape(*shape);
  }

  for (const auto& shape : shapes) {
    delete shape;
  }

  // shapes.clear();

//Smart pointer vector
  cout << endl << "Vector of unique shape pointers" << endl;

  vector<unique_ptr<Shape> > shapes2;
  shapes2.push_back(std::move(make_unique<Circle>()));
  shapes2.push_back(std::move(make_unique<Rectangle>()));

  for (const auto& shape : shapes2) {
    showShape(*shape);
  }

  return 0;
}