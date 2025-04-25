#pragma once
#include <string>
using namespace std;

class person {
public:
    person();
    person(string name, float newWeight);
    ~person();

    double operator+(const person& otherperson) const;
    bool operator==(const person& otherperson) const;
    bool operator!=(const person& otherperson) const;
    bool operator>(const person& otherperson) const;
    bool operator<(const person& otherperson) const;

    void setAge(int age);
    int getAge() const;
    float getWeight() const;

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
