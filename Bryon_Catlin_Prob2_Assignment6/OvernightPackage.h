#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"

class OvernightPackage : public Package {
    public:
    //constructor
    OvernightPackage(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double weight, double cost, double fee);
    //overwritten calculateCost function
    double calculateCost();
    //mutator function for overnightFeePerOunce
    void setOvernightFeePerOunce(const double& overnightFeePerOunce);

    private:
    double fee;
};

#endif