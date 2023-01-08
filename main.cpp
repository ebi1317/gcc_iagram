//Implement the class Car in the following UML diagram
// created by ebrahim zeinali

#include <iostream>

using namespace std;

class Car
{
private:
    string type;
    double mileage;

public:
    Car();
    Car(string t, double m) : type{t}, mileage{m}{};
    void drive(double distance);
    Car& tow(Car& c, double distance);
    void setType(string t) {type = t;};
    string getType() const{return type;};
    double getMileage() const {return mileage;}
    void print() {cout << "car type: "<< type << " mileage is: " << mileage << endl;}

};


void Car::drive(double distance)
{
    mileage = mileage + distance;
}

Car& Car::tow(Car& c,double distance)
{
    c.drive(distance);
    mileage   = mileage   + distance;

    return *this;
}

int main()
{

    Car c1("BMW", 12);
    Car c2("RENULT",72);



    c1.tow(c2,21);
    c1.print();
    c2.print();













}
