#include<iostream>
using namespace std;

class Vehicle{
    public:
        int milage;
        int price;

};

class Car: public Vehicle{
    public:
       int cost;
       int warranty;
       int capacity;
       string fuel_type; 
};

class Bike : public Vehicle{
    public:
        int no_of_cylinders;
        int no_of_gears;
        string cooling_type;
        string wheel_type;
        int fuel_tank_size;    
};

class Audi : public Car{
    int model_type;
};

class Ford : public Car{
    int model_type;
};

class Bajaj : public Bike{
    int make_type;
};

class TVS : public Bike{
    int make_type;
};

int main(){
    Audi R8;
    R8.milage = 12;
    R8.price = 23000000;
    R8.cost = 25000000;
    R8.warranty = 10;
    R8.capacity = 2;
    R8.fuel_type = "Petrol";

    cout<<endl;
    cout<<" !!!Audi Specifications!!! "<<endl;
    cout<<"     Mileage: "<<R8.milage<<endl;
    cout<<"     Price: "<<R8.price<<endl;
    cout<<"     Ownership Cost: "<<R8.cost<<endl;
    cout<<"     Warranty: "<<R8.warranty<<endl;
    cout<<"     Capacity: "<<R8.capacity<<endl;
    cout<<"     Fuel Type: "<<R8.fuel_type<<endl;
    cout<<endl;

    Ford Mustang;
    Mustang.milage = 15;
    Mustang.price = 7500000;
    Mustang.cost = 9000000;
    Mustang.warranty = 10;
    Mustang.capacity = 2;
    Mustang.fuel_type = "Petrol";

    cout<<" !!!Ford Specifications!!! "<<endl;
    cout<<"     Mileage: "<<Mustang.milage<<endl;
    cout<<"     Price: "<<Mustang.price<<endl;
    cout<<"     Ownership Cost: "<<Mustang.cost<<endl;
    cout<<"     Warranty: "<<Mustang.warranty<<endl;
    cout<<"     Capacity: "<<Mustang.capacity<<endl;
    cout<<"     Fuel Type: "<<Mustang.fuel_type<<endl;
    cout<<endl;
    
    Bajaj Pulsar;
    Pulsar.milage = 55;
    Pulsar.price = 105000;
    Pulsar.no_of_cylinders = 1;
    Pulsar.no_of_gears= 6;
    Pulsar.cooling_type = "air";
    Pulsar.wheel_type = "alloy";
    Pulsar.fuel_tank_size = 15;

    cout<<" !!!Bajaj Specifications!!! "<<endl;
    cout<<"     Mileage: "<<Pulsar.milage<<endl;
    cout<<"     Price: "<<Pulsar.price<<endl;
    cout<<"     No of Cylinders: "<<Pulsar.no_of_cylinders<<endl;
    cout<<"     No of Gears: "<<Pulsar.no_of_gears<<endl;
    cout<<"     Cooling Type: "<<Pulsar.cooling_type<<endl;
    cout<<"     Wheel Type: "<<Pulsar.wheel_type<<endl;
    cout<<"     Fuel Tank Size: "<<Pulsar.fuel_tank_size<<endl;
    cout<<endl;

    TVS Apache;
    Apache.milage = 50;
    Apache.price = 100000;
    Apache.no_of_cylinders = 1;
    Apache.no_of_gears= 6;
    Apache.cooling_type = "air";
    Apache.wheel_type = "alloy";
    Apache.fuel_tank_size = 15;

    cout<<" !!!TVS Specifications!!! "<<endl;
    cout<<"     Mileage: "<<Apache.milage<<endl;
    cout<<"     Price: "<<Apache.price<<endl;
    cout<<"     No of Cylinders: "<<Apache.no_of_cylinders<<endl;
    cout<<"     No of Gears: "<<Apache.no_of_gears<<endl;
    cout<<"     Cooling Type: "<<Apache.cooling_type<<endl;
    cout<<"     Wheel Type: "<<Apache.wheel_type<<endl;
    cout<<"     Fuel Tank Size: "<<Apache.fuel_tank_size<<endl;


    return 0;
}