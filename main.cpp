#include <iostream>
#include <string>
#include "MyCar.h"
#include "ManageCars.h"

int main() {
    ManageCars manager;

    std::string license_number;
    std::string model;
    double price;
    int year;
    std::string color;
    double engine_volume;
    std::string gear_type;
    std::string country_of_manufacture;
    int hand;

    std::cout << "Enter car details:" << std::endl;

    std::cout << "License Number: ";
    std::getline(std::cin, license_number);

    std::cout << "Model: ";
    std::getline(std::cin, model);

    std::cout << "Price: ";
    std::cin >> price;

    std::cout << "Year: ";
    std::cin >> year;

    std::cout << "Color: ";
    std::cin.ignore();
    std::getline(std::cin, color);

    std::cout << "Engine Volume: ";
    std::cin >> engine_volume;

    std::cout << "Gear Type: ";
    std::cin.ignore();
    std::getline(std::cin, gear_type);

    std::cout << "Country of Manufacture: ";
    std::getline(std::cin, country_of_manufacture);

    std::cout << "Hand: ";
    std::cin >> hand;

    MyCar car(license_number, model, price, year, color, engine_volume, gear_type, country_of_manufacture, hand);
    manager.addCar(car);


    std::cout << "All cars:" << std::endl;
    manager.printAll();




    return 0;
}