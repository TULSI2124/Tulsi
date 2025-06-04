#include <iostream>
#include <string>
using namespace std;

// Base Class
class Vehicle {
protected:
    int vehicleID;
    string manufacturer;
    string model;
    int year;

    static int totalVehicles;

public:
    Vehicle() {
        vehicleID = 0;
        manufacturer = "";
        model = "";
        year = 0;
        totalVehicles++;
    }

    Vehicle(int id, string manu, string mod, int yr) {
        vehicleID = id;
        manufacturer = manu;
        model = mod;
        year = yr;
        totalVehicles++;
    }

    virtual ~Vehicle() {
        totalVehicles--;
    }

    // Getters and Setters
    int getVehicleID() const { return vehicleID; }
    string getManufacturer() const { return manufacturer; }
    string getModel() const { return model; }
    int getYear() const { return year; }

    void setVehicleID(int id) { vehicleID = id; }
    void setManufacturer(string manu) { manufacturer = manu; }
    void setModel(string mod) { model = mod; }
    void setYear(int yr) { year = yr; }

    static int getTotalVehicles() {
        return totalVehicles;
    }

    virtual void display() const {
        cout << "Vehicle ID: " << vehicleID << "\nManufacturer: " << manufacturer
             << "\nModel: " << model << "\nYear: " << year << endl;
    }
};
int Vehicle::totalVehicles = 0;

// -------------------- Derived Classes ----------------------
// Single Inheritance
class Car : public Vehicle {
protected:
    string fuelType;

public:
    Car() : Vehicle() {
        fuelType = "";
    }

    Car(int id, string manu, string mod, int yr, string fuel)
        : Vehicle(id, manu, mod, yr) {
        fuelType = fuel;
    }

    void setFuelType(string fuel) { fuelType = fuel; }
    string getFuelType() const { return fuelType; }

    void display() const override {
        Vehicle::display();
        cout << "Fuel Type: " << fuelType << endl;
    }
};

// Multilevel Inheritance
class ElectricCar : public Car {
protected:
    int batteryCapacity;

public:
    ElectricCar() : Car() {
        batteryCapacity = 0;
    }

    ElectricCar(int id, string manu, string mod, int yr, string fuel, int battery)
        : Car(id, manu, mod, yr, fuel) {
        batteryCapacity = battery;
    }

    void setBatteryCapacity(int battery) { batteryCapacity = battery; }
    int getBatteryCapacity() const { return batteryCapacity; }

    void display() const override {
        Car::display();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

// Aircraft class for Multiple Inheritance
class Aircraft {
protected:
    int flightRange;

public:
    Aircraft() {
        flightRange = 0;
    }

    Aircraft(int range) {
        flightRange = range;
    }

    void setFlightRange(int range) { flightRange = range; }
    int getFlightRange() const { return flightRange; }

    void displayAircraft() const {
        cout << "Flight Range: " << flightRange << " km" << endl;
    }
};

// Multiple Inheritance
class FlyingCar : public Car, public Aircraft {
public:
    FlyingCar() : Car(), Aircraft() {}

    FlyingCar(int id, string manu, string mod, int yr, string fuel, int range)
        : Car(id, manu, mod, yr, fuel), Aircraft(range) {}

    void display() const {
        Car::display();
        Aircraft::displayAircraft();
    }
};

// SportsCar from ElectricCar
class SportsCar : public ElectricCar {
private:
    int topSpeed;

public:
    SportsCar() : ElectricCar() {
        topSpeed = 0;
    }

    SportsCar(int id, string manu, string mod, int yr, string fuel, int battery, int speed)
        : ElectricCar(id, manu, mod, yr, fuel, battery) {
        topSpeed = speed;
    }

    void setTopSpeed(int speed) { topSpeed = speed; }
    int getTopSpeed() const { return topSpeed; }

    void display() const override {
        ElectricCar::display();
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
    }
};

// Hierarchical Inheritance
class Sedan : public Car {
public:
    Sedan() : Car() {}
    Sedan(int id, string manu, string mod, int yr, string fuel)
        : Car(id, manu, mod, yr, fuel) {}
};

class SUV : public Car {
public:
    SUV() : Car() {}
    SUV(int id, string manu, string mod, int yr, string fuel)
        : Car(id, manu, mod, yr, fuel) {}
};

// ------------------ Vehicle Registry -----------------------
class VehicleRegistry {
private:
    Vehicle* vehicles[100];
    int count;

public:
    VehicleRegistry() {
        count = 0;
    }

    ~VehicleRegistry() {
        for (int i = 0; i < count; i++) {
            delete vehicles[i];
        }
    }

    void addVehicle(Vehicle* v) {
        if (count < 100) {
            vehicles[count++] = v;
        } else {
            cout << "Registry full!" << endl;
        }
    }

    void displayAll() const {
        for (int i = 0; i < count; i++) {
            cout << "\n--- Vehicle " << i + 1 << " ---" << endl;
            vehicles[i]->display();
        }
    }

    void searchById(int id) const {
        for (int i = 0; i < count; i++) {
            if (vehicles[i]->getVehicleID() == id) {
                cout << "\nVehicle Found:\n";
                vehicles[i]->display();
                return;
            }
        }
        cout << "Vehicle with ID " << id << " not found!" << endl;
    }
};

// ---------------------- Main Function -----------------------
int main() {
    VehicleRegistry registry;
    int choice;

    do {
        cout << "\n--- Vehicle Registry Menu ---\n";
        cout << "1. Add Car\n2. Add Electric Car\n3. Add Flying Car\n";
        cout << "4. Add Sports Car\n5. Add Sedan\n6. Add SUV\n";
        cout << "7. View All Vehicles\n8. Search by ID\n9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        int id, year, battery, range, speed;
        string manu, model, fuel;

        switch (choice) {
            case 1:
                cout << "Enter ID, Manufacturer, Model, Year, Fuel Type: ";
                cin >> id >> manu >> model >> year >> fuel;
                registry.addVehicle(new Car(id, manu, model, year, fuel));
                break;
            case 2:
                cout << "Enter ID, Manufacturer, Model, Year, Fuel Type, Battery Capacity: ";
                cin >> id >> manu >> model >> year >> fuel >> battery;
                registry.addVehicle(new ElectricCar(id, manu, model, year, fuel, battery));
                break;
            case 3:
                cout << "Enter ID, Manufacturer, Model, Year, Fuel Type, Flight Range: ";
                cin >> id >> manu >> model >> year >> fuel >> range;
                registry.addVehicle(new FlyingCar(id, manu, model, year, fuel, range));
                break;
            case 4:
                cout << "Enter ID, Manufacturer, Model, Year, Fuel Type, Battery Capacity, Top Speed: ";
                cin >> id >> manu >> model >> year >> fuel >> battery >> speed;
                registry.addVehicle(new SportsCar(id, manu, model, year, fuel, battery, speed));
                break;
            case 5:
                cout << "Enter ID, Manufacturer, Model, Year, Fuel Type: ";
                cin >> id >> manu >> model >> year >> fuel;
                registry.addVehicle(new Sedan(id, manu, model, year, fuel));
                break;
            case 6:
                cout << "Enter ID, Manufacturer, Model, Year, Fuel Type: ";
                cin >> id >> manu >> model >> year >> fuel;
                registry.addVehicle(new SUV(id, manu, model, year, fuel));
                break;
            case 7:
                registry.displayAll();
                break;
            case 8:
                cout << "Enter Vehicle ID to search: ";
                cin >> id;
                registry.searchById(id);
                break;
            case 9:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 9);

    return 0;
}