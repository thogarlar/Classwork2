#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;
    double speed;
    double fuel;

public:
    // Getter and Setter for make
    std::string getMake() const {
        return make;
    }

    void setMake(const std::string& newMake) {
        make = newMake;
    }

    // Getter and Setter for model
    std::string getModel() const {
        return model;
    }

    void setModel(const std::string& newModel) {
        model = newModel;
    }

    // Getter and Setter for year
    int getYear() const {
        return year;
    }

    void setYear(int newYear) {
        if (newYear >= 0) {
            year = newYear;
        } else {
            std::cout << "Invalid year value. Year must be non-negative." << std::endl;
        }
    }

    // Getter and Setter for speed
    double getSpeed() const {
        return speed;
    }

    void setSpeed(double newSpeed) {
        if (newSpeed >= 0) {
            speed = newSpeed;
        } else {
            std::cout << "Invalid speed value. Speed must be non-negative." << std::endl;
        }
    }

    // Getter and Setter for fuel
    double getFuel() const {
        return fuel;
    }

    void setFuel(double newFuel) {
        if (newFuel >= 0) {
            fuel = newFuel;
        } else {
            std::cout << "Invalid fuel value. Fuel must be non-negative." << std::endl;
        }
    }
};

int main() {
    Car myCar;

    // Using setters to assign values
    myCar.setMake("Toyota");
    myCar.setModel("Camry");
    myCar.setYear(2022);
    myCar.setSpeed(50.0);
    myCar.setFuel(60.0);

    // Using getters to retrieve values
    std::cout << "Make: " << myCar.getMake() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;
    std::cout << "Speed: " << myCar.getSpeed() << " km/h" << std::endl;
    std::cout << "Fuel: " << myCar.getFuel() << " liters" << std::endl;

    // Try setting invalid values
    myCar.setYear(-5);      // This will print an error message
    myCar.setSpeed(-70.0);  // This will print an error message

    return 0;
}
