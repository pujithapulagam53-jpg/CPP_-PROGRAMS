// Multilevel Inheritance
#include<iostream>
using namespace std;
class Vehicle {  
public: 
    void move() { 
        cout << "Vehicle is moving." << endl; 
    } 
}; 
class Car : public Vehicle { 
public: 
    void start() { 
        cout << "Car started." << endl; 
    } 
}; 
class SportsCar : public Car { 
public: 
    void turbo() { 
        cout << "SportsCar in turbo mode!" << endl;
    }
};
int main()
{
	SportsCar s;
	s.move();
	s.start();
	s.turbo();
}
