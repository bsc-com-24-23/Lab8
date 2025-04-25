#include <iostream>
using namespace std;
#include "Box.h"

int main(){

    Box box1;
    Box box2;
    Box box3;

    double volume=0.0;

    //setting the dimensions of box1

    box1.setLength(6.0);
    box1.setWidth(7.0);
    box1.setHeight(4.0);
    //setting the dimensions of box2
    box2.setLength(5.0);
    box2.setWidth(8.0);
    box2.setHeight(3.0);

    //calculating the volume of box1
    volume = box1.getVolume();
    cout << "Volume of box1: " << volume << endl;
    //calculating the volume of box2
    volume = box2.getVolume();
    cout << "Volume of box2: " << volume << endl;

    //addaing the two boxes
    box3 = box1 + box2;
    //calculating the volume of box3
    volume = box3.getVolume();
    cout << "Volume of box3: " << volume << endl;

    return 0;
}