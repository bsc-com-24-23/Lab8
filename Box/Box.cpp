#include <iostream>
#include "Box.h"
using namespace std;

Box::Box()
{
    length = 0;
    width = 0;
    height = 0;
}
Box::~Box()
{
    // Destructor
}
Box::Box(double newLength, double newWidth, double newHeight)
{
    length = newLength;
    width = newWidth;
    height = newHeight;
}
double Box::getVolume()
{
    return length * width * height;
}
void Box::setLength(double len)
{
    length = len;
}
void Box::setWidth(double wid)
{
    width = wid;
}
void Box::setHeight(double hei)
{
    height = hei;
}
Box Box::operator+(Box &b)
{
    Box box;
    box.length = length + b.length;
    box.width = width + b.width;
    box.height = height + b.height;
    return box;
}

