#include<iostream>
using namespace std;

class Vehicle {
public:
    string name;
    string color;
    int year;

    Vehicle(string n, string c, int y) {
        name = n;
        color = c;
        year = y;
        cout << "Vehcile parent class" << endl;
    }

    Vehicle() {
        name = "noName";
        color = "noColor";
        year = 0;
    }

    void print_details() {
        cout << "THis is a " << name << " " << "which is of " << color << " color and was released in the year " << year
                << endl;
    }
};

class Car : public Vehicle {
public:
    Car(string n, string c, int y): Vehicle(n, c, y) {
        cout << "Car constructor called" << endl;
    }

    void print_cardetails() {
        cout << "THis is a car from" << name << " " << "which is of " << color << " color and was released in the year "
                << year << endl;
    }
};

class Bike : public Vehicle {
public:
    Bike(string n, string c, int y): Vehicle(n, c, y) {
        cout << "Bike constructor called" << endl;
    }

    void print_bike() {
        cout << "THis is a bike from" << name << " " << "which is of " << color <<
                " color and was released in the year " << year << endl;
    }
};

int main() {
    // Car car1("BMW","RED",2002);
    // car1.print_details();//parent class
    // car1.print_cardetails();//for calling the chil class

    Vehicle vehicle1;
    vehicle1.print_details();//will print the default info
    Car car1("BMW", "BLUE", 2020);
    car1.print_cardetails();
    Bike bike1("BULLET", "BLACK", 2020);
    bike1.print_bike();

    return 0;
}
