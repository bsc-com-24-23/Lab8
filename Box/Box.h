#pragma once

class Box
{
public:
    Box();
    Box(double newLength, double newWidth, double newHeight);

    ~Box();
    double getVolume();
    void setLength(double len);
    void setWidth(double wid);
    void setHeight(double hei);
    Box operator+(Box &b);

    private:
    double length;
    double width;
    double height;

};

