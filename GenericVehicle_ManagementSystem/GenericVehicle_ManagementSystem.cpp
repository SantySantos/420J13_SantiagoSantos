#include <iostream>
#include <string>\

class Vehicle {
protected:
    std::string vehicleName;
    
public:

    //constructor
    Vehicle(std::string vehicleName) : vehicleName(vehicleName){}

    //virtual functions for abstraction
    virtual void displayVehicleInfo() = 0;

};

class Car : public Vehicle {
private:
    int numDoors;

public:
    void displayVehicleInfo() override {
        std::cout << "Car has: " << numDoors << " doors" << '\n';
    }
};

class Motorcycle : public Vehicle {
private:
    bool hasSideCar;

public:
    void displayVehicleInfo() override {

        hasSideCar ? std::cout << "Moto has sideCar" << '\n' : 
            std::cout << "Moto does not has sideCar" << '\n';
           
    }
};

template<typename T = Vehicle>
class Garage {

private:
    T* myVehicle;

public:
    void StoreVehicle(T v){}
    
    void showVehicle(){
        if (myVehicle == nullptr)
            std::cout << "No Vehicle" << std::endl;

        else
            myVehicle->displayVehicleInfo();

    }
};

int main()
{    
   
    return 0;
}
