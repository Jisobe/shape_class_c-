#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
class Rectangle : public Shape {

  private:
    int width; 
    int height;

  public:
    Rectangle();
    Rectangle( int width, int height );
    void draw() const override;
    int getArea() const;
    void setWidth( int width );
    void setHeight( int height );
    int getWidth() const;
    int getHeight() const;

};

#endif
