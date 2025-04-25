#include "Person.h"
#include <iostream>
using namespace std;

person::person() {
    mWeight = 0;
    mFirstName = "";
    mAge = 0;
}

person::~person() {
    // Destructor
}

person::person(string name, float newWeight) {
    mWeight = newWeight;
    mFirstName = name;
    mAge = 0;
}

double person::operator+(const person& otherperson) const {
    return this->mWeight + otherperson.mWeight;
}

bool person::operator==(const person& otherperson) const {
    return (mFirstName == otherperson.mFirstName &&
            mAge == otherperson.mAge &&
            mWeight == otherperson.mWeight);
}

bool person::operator!=(const person& otherperson) const {
    return !(*this == otherperson);
}

bool person::operator>(const person& otherperson) const {
    return mAge > otherperson.mAge;
}

bool person::operator<(const person& otherperson) const {
    return mAge < otherperson.mAge;
}

void person::setAge(int age) {
    mAge = age;
}

int person::getAge() const {
    return mAge;
}

float person::getWeight() const {
    return mWeight;
}
