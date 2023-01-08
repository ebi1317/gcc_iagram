#include "Car.h"

void Car::drive(double distance)
{
    mileage = mileage + distance;
}

Car& Car::tow(Car& towed, double distance)
{

    towed.drive(distance);
    towed = towed;
    mileage = mileage + distance;
    return *this;
}

void Car::setType(string carType)
{
    type = carType;
}

string Car::getType() {return type;}

double Car::getMileage() {return mileage;}

void Car::print()
{
    cout << "car type: " << type << " mileage: " << mileage << endl;
}





