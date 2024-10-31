#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include <vector>
#include <memory>
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

//Regular pointers
  vector<Shape*> shapes;
  Circle* circlePtr;
  Rectangle* rectanglePtr;

  circlePtr = new Circle;
  shapes.push_back(circlePtr);
  rectanglePtr = new Rectangle;
  shapes.push_back(rectanglePtr);

  for (unsigned int i = 0; i < shapes.size(); i++) {
    shapes.at(i)->draw();
  }

  delete circlePtr;
  delete rectanglePtr;

//Smart pointers
  vector<unique_ptr<Shape>> shapes2;
  // unique_ptr<Circle> circlePtr2(new Circle);
  auto circlePtr2 = make_unique<Circle>;
  shapes2.emplace_back(circlePtr2);
  // unique_ptr<Rectangle> rectanglePtr2(new Rectangle);
  auto rectanglePtr2 = make_unique<Rectangle>;
  shapes2.emplace_back(rectanglePtr2);

  for (unsigned int i = 0; i < shapes2.size(); i++) {
    shapes2.at(i)->draw();
  }

  return 0;
}