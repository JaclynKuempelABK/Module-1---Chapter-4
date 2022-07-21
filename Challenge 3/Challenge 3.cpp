#include <iostream>

class Vehicle
{
public:
    virtual void Drive() = 0;


};

class Boat : public Vehicle
{
public:
    void Drive() override
    {
        std::cout << "Boating forward!" << std::endl;
    }
};

class Car : public Vehicle
{
public:
    void Drive() override
    {
        std::cout << "Driving forward!" << std::endl;
    }
};

class Airplane : public Vehicle
{
public:
    void Drive() override
    {
        std::cout << "Flying forward!" << std::endl;
    }
};

int main()
{
    Boat myBoat;
    Car myCar;
    Airplane myAirplane;

    myBoat.Drive();
    myCar.Drive();
    myAirplane.Drive();
}