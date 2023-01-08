#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;
class Car
{
    public:


        void drive(double distance);
        Car& tow(Car& towed, double distance);

        string getType();
        double getMileage();

        void setType(string carType);

        void print();



    private:
        string type;
        double mileage;
};

#endif // CAR_H
