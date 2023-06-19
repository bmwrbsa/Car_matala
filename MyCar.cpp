//
// Created by bmwrb on 19/06/2023.
//


// MyCar.cpp
#include "MyCar.h"
#include <iostream>

// Constructor
MyCar::
MyCar(std::
      string licenseNumber,
      std::
      string model,
      double price,
      int year,
      std::
      string color,
      double engineVolume,
      std::
      string gearType,
      std::
      string countryOfOrigin,
      int hand)
        : licenseNumber_(licenseNumber),
          model_(model),
          price_(price),
          year_(year),
          color_(color),
          engineVolume_(engineVolume),
          gearType_(gearType),
          countryOfOrigin_(countryOfOrigin),
          hand_(hand) {}

// Getters
std::
string MyCar::
getLicenseNumber() const {
    return licenseNumber_;
}
std::
string MyCar::
getModel() const {
    return model_;
}
double MyCar::
getPrice() const {
    return price_;
}
int MyCar::
getYear() const {
    return year_;
}
std::
string MyCar::
getColor() const {
    return color_;
}
double MyCar::
getEngineVolume() const {
    return engineVolume_;
}
std::
string MyCar::
getGearType() const {
    return gearType_;
}
std::
string MyCar::
getCountryOfOrigin() const {
    return countryOfOrigin_;
}
int MyCar::
getHand() const {
    return hand_;
}

// Setters
void MyCar::
setLicenseNumber(std::
                 string licenseNumber) {
    licenseNumber_ = licenseNumber;
}
void MyCar::
setModel(std::
         string model) {
    model_ = model;
}
void MyCar::
setPrice(double price) {
    if (price > 0) {
        price_ = price;
    } else {
        std::
        cerr << "Error: Price must be a positive number." << std::
        endl;
    }
}
void MyCar::
setYear(int year) { year_ = year; }
void MyCar::
setColor(std::
         string color) { color_ = color; }
void MyCar::
setEngineVolume(double engineVolume) { engineVolume_ = engineVolume; }
void MyCar::
setGearType(std::
            string gearType) { gearType_ = gearType; }
void MyCar::
setCountryOfOrigin(std::
                   string countryOfOrigin) { countryOfOrigin_ = countryOfOrigin; }
void MyCar::
setHand(int hand) { hand_ = hand; }

// Methods
bool MyCar::
compare(const MyCar& car) const {
    if (year_ > car.year_) {
        return true;
    } else {
        return false;
    }
}
//void MyCar::
//print() const {
//    std::
//    cout << "License Number: " << licenseNumber_ << "\n";
//    std::
//    cout << "Model: " << model_ << "\n";
//    std::
//    cout << "Price: " << price_ << "\n";
//    std::
//    cout << "Year: " << year_ << "\n";
//    std::
//    cout << "Color: " << color_ << "\n";
//    std::
//    cout << "Engine Volume: " << engineVolume_ << "\n";
//    std::
//    cout << "Gear Type: " << gearType_ << "\n";
//    std::
//    cout << "Country of Origin: " << countryOfOrigin_ << "\n";
//    std::
//    cout << "Hand: " << hand_ << "\n";
//}
void MyCar:: print() const { std::cout << "License Number: " << licenseNumber_ << std::endl; std::cout << "Model: " << model_ << std::endl; std::cout << "Price: " << price_ << std::endl; std::cout << "Year: " << year_ << std::endl; std::cout << "Color: " << color_ << std::endl; std::cout << "Engine Volume: " << engineVolume_ << std::endl; std::cout << "Gear Type: " << gearType_ << std::endl; std::cout << "Country of Origin: " << countryOfOrigin_ << std::endl; std::cout << "Hand: " << hand_ << std::endl;
}
