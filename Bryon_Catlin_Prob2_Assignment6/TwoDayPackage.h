#ifndef TWODAYPACKAGE_H
#define TWODATPACKAGE_H
#include "Package.h"

class TwoDayPackage : public Package{
    public:
    //constructor
    TwoDayPackage(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double weight, double cost, double fee);
    //mutator function
    void setFlatFee(const double& flatFee);
    //overwritten calculateCost function
    double calculateCost();

    private:
    double flatFee;
};

#endif