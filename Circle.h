#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {

  private:
    float radius;
  public:
    Circle();
    Circle(float radius);
    void setRadius(float radius);
    float getRadius() const;
    float getArea() const;
    void draw() const override;
    

};


#endif