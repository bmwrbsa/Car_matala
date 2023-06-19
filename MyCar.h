//
// Created by bmwrb on 19/06/2023.
//

#ifndef UNTITLED1_MYCAR_H
#define UNTITLED1_MYCAR_H



// MyCar.h
// MyCar.h
//#ifndef MYCAR_H
//#define MYCAR_H

#include <string>

class MyCar {
public:
    // Constructor
    MyCar(std::string licenseNumber, std::string model, double price, int year, std::string color, double engineVolume, std::string gearType, std::string countryOfOrigin, int hand);

    // Getters
    std::string getLicenseNumber() const;
    std::string getModel() const;
    double getPrice() const;
    int getYear() const;
    std::string getColor() const;
    double getEngineVolume() const;
    std::string getGearType() const;
    std::string getCountryOfOrigin() const;
    int getHand() const;

    // Setters
    void setLicenseNumber(std::string licenseNumber);
    void setModel(std::string model);
    void setPrice(double price);
    void setYear(int year);
    void setColor(std::string color);
    void setEngineVolume(double engineVolume);
    void setGearType(std::string gearType);
    void setCountryOfOrigin(std::string countryOfOrigin);
    void setHand(int hand);

    // Methods
    bool compare(const MyCar& car) const;
    void print() const;

private:
    // Member variables
    std::string licenseNumber_;
    std::string model_;
    double price_;
    int year_;
    std::string color_;
    double engineVolume_;
    std::string gearType_;
    std::string countryOfOrigin_;
    int hand_;
};

#endif