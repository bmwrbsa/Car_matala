//
// Created by bmwrb on 19/06/2023.
//
//
//#ifndef UNTITLED1_MANAGECARS_H
//#define UNTITLED1_MANAGECARS_H
//
//
//class ManageCars {
#ifndef MANAGECARS_H
#define MANAGECARS_H

#include "MyCar.h"
#include <list>
#include <vector>
#include <stdexcept>

class ManageCars {
public:
    // Constructor
    ManageCars();

    // Methods
    void addCar(const MyCar& myCar);
    void removeCar(std::string licenseNumber);
    std::vector<std::string> carsFromToYears(int fromYear, int toYear) const;
    std::vector<std::string> carsFromToPrices(double fromPrice, double toPrice) const;
    void printCar(std::string licenseNumber) const;
    void deleteAll();
    void printAll() const;

private:
    // Member variables
    std::list<MyCar> cars_;
};

#endif



//#endif //UNTITLED1_MANAGECARS_H
