#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    person jane = person("Jane", 50.0f);
    person john = person("John", 70.0f);

    double totalWeight =jane + john;
    cout << "Total weight: " << totalWeight<< endl;

    if(jane == john){
        cout << "This is the same person" << endl;
    }
    if (jane != john) {
        cout << "This is not the same person" << endl;
    }
    if (jane > john) {
        cout << "Jane is older than John" << endl;
    }
    if (jane < john) {
        cout << "Jane is younger than John" << endl;
    }
    

    return 0;
}