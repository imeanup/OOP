// TODO: Define all the functions and classes as per the relationship for a shopkeeper of the following type of items,
// a) Two wheeler manual, electric, and automatic
// b) Three wheeler manual, electric and automatic
// c) Four wheeler automatic

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Vehicle class 
class Vehicle{
    public:
        string brand;
        string model;
        int year;
        float price;

        Vehicle(string brand, string model, int year, float price) : brand(brand), model(model), year(year), price(price) {}
};

// TwoWheeler class derived from Vehicle
class TwoWheeler : public Vehicle{
    public:
        string type; // manual, electric, automatic
        TwoWheeler(string b, string m, int y, float p, string t) : Vehicle(b, m, y, p) {
        type = t;
    }
};

// ThreeWheeler class derived from Vehicle
class ThreeWheeler : public Vehicle {
    public:
        string type;    // manual, electric, automatic
        ThreeWheeler(string b, string m, int y, float p, string t) : Vehicle(b, m, y, p) {
            type = t;
        }
};

// FourWheeler class derived from Vehicle
class FourWheeler : public Vehicle {
    public:
        string type;  // automatic
        FourWheeler(string b, string m, int y, float p) : Vehicle(b, m, y, p) {
            type = "automatic";
        }
};

// Shop class to manage the inventory
class Shop{
    public:
        vector<TwoWheeler> twoWheelers;     // inventory of TwoWheelers
        vector<ThreeWheeler> threeWheelers; // inventory of ThreeWheelers
        vector<FourWheeler> fourWheelers;   // inventory of FourWheelers

        void addTwoWheeler(string b, string m, int y, float p, string t) {
            TwoWheeler vehicle(b, m, y, p, t);
            twoWheelers.push_back(vehicle);
        }

        void addThreeWheeler(string b, string m, int y, float p, string t) {
            ThreeWheeler vehicle(b, m, y, p, t);
            threeWheelers.push_back(vehicle);
        }

        void addFourWheeler(string b, string m, int y, float p) {
            FourWheeler vehicle(b, m, y, p);
            fourWheelers.push_back(vehicle);
        }

        void displayTwoWheelers() {
            cout << "TwoWheelers:" << endl;
            for (TwoWheeler vehicle : twoWheelers) {
                cout << vehicle.brand << " " << vehicle.model << " " << vehicle.type << " " << vehicle.price << endl;
            }
            cout << endl;
        }

        void displayThreeWheelers() {
            cout << "ThreeWheelers:" << endl;
            for (ThreeWheeler vehicle : threeWheelers) {
                cout << vehicle.brand << " " << vehicle.model << " " << vehicle.type << " " << vehicle.price << endl;
            }
            cout << endl;
        }

        void displayFourWheelers(){
            cout << "FourWheeler: " << endl;
            for (FourWheeler vehicle : fourWheelers){
                cout << vehicle.brand << " " << vehicle.model << " " << vehicle.type << " " << vehicle.price << endl;
            }
            cout << endl;
        }
};