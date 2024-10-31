#include "Circle.h"
#include "Rectangle.h"

void showShape( Shape& shape){
  shape.draw();
}

int main(void){

  Shape shape1;
  Circle circle1;
  Rectangle rectangle1;

  showShape(shape1);
  showShape(circle1);
  showShape(rectangle1);

  return 0;
}