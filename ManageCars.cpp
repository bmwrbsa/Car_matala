//
// Created by bmwrb on 19/06/2023.
//

#include "ManageCars.h"#include "ManageCars.h"
#include <iostream>

// Constructor
ManageCars::
ManageCars() {}

// Methods
void ManageCars::
addCar(const MyCar& myCar) {
    cars_.
            push_back(myCar);
}
void ManageCars::
removeCar(std::
          string licenseNumber) {
    for (auto it = cars_.
            begin();
         it != cars_.
                 end();
         ++it) {
        if (it->
                getLicenseNumber() == licenseNumber) {
            cars_.
                    erase(it);
            return;
        }
    }
    throw std::
    runtime_error("Error: Car with license number " + licenseNumber + " not found.");
}
std::
vector<std::
string> ManageCars::
carsFromToYears(int fromYear, int toYear) const {
    std::
    vector<std::
    string> result;
    for (const auto& car : cars_) {
        if (car.
                getYear() >= fromYear && car.
                getYear() <= toYear) {
            result.
                    push_back(car.
                    getLicenseNumber());
        }
    }
    return result;
}
std::
vector<std::
string> ManageCars::
carsFromToPrices(double fromPrice, double toPrice) const {
    std::
    vector<std::
    string> result;
    for (const auto& car : cars_) {
        if (car.
                getPrice() >= fromPrice && car.
                getPrice() <= toPrice) {
            result.
                    push_back(car.
                    getLicenseNumber());
        }
    }
    return result;
}
void ManageCars::
printCar(std::
         string licenseNumber) const {
    for (const auto& car : cars_) {
        if (car.
                getLicenseNumber() == licenseNumber) {
            car.
                    print();
            return;
        }
    }
    throw std::
    runtime_error("Error: Car with license number " + licenseNumber + " not found.");
}
void ManageCars::
deleteAll() {
    cars_.
            clear();
}
void ManageCars::
printAll() const {
    for (const auto& car : cars_) {
        car.
                print();
        std::
        cout << "\n";
    }
}
