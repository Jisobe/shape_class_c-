#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;


class Shape{

  private:
    string background;

  public:
    virtual ~Shape() = default;
    string getBackground() const;
    void setBackground( const string& value);
    virtual void draw() const;

};

#endif