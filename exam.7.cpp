#include <iostream>
using namespace std;


class Vehicle {
public:
    virtual void startEngine() = 0; 
    virtual void drive() = 0;       
    virtual ~Vehicle() {}          
};


class Car : public Vehicle 
{
public:
    void startEngine() override 
	{
        cout << "Car engine started." << endl;
    }

    void drive() override
	 {
        cout << "Car is now driving on the road." << endl;
    }
};


class Bike : public Vehicle
 {
public:
    void startEngine() override 
	{
        cout << "Bike engine started." << endl;
    }

    void drive() override 
	{
        cout << "Bike is now zooming on the road." << endl;
    }
};

int main()
{

   
    Vehicle* vehicles[2];

    
    vehicles[0] = new Car();
    vehicles[1] = new Bike();

    
    for (int i = 0; i < 2; ++i)
	 {
        vehicles[i]->startEngine();
        vehicles[i]->drive();
        cout << endl;
    }

  
    for (int i = 0; i < 2; ++i)
	 {
        delete vehicles[i];
    }

  
}
/*
Car engine started.
Car is now driving on the road.

Bike engine started.
Bike is now zooming on the road.
*/
