#include "Shape.h"
#include <string>
#include <iostream>
using namespace std;


string Shape::getBackground() const{
  return background;
}

void Shape::setBackground( const string& value){
  background = value;
}

void Shape::draw(){
  cout << "Drawing..." << endl;
}
