#include "OvernightPackage.h"

//constructor which receives data from parent Package
OvernightPackage::OvernightPackage(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double weight, double cost, double fee) : Package(name, address, city, state, ZIP, weight, cost) {
    //set fee from user-defined constructor
    this->fee = fee;
}

//perform calculateCost calculation and return value
double OvernightPackage::calculateCost() {
    return (fee+cost)*weight;
}

//mutator function for overnight fee per ounce
void OvernightPackage::setOvernightFeePerOunce(const double& overnightFeePerOunce) {
    //if overnightFeePerOunce is less than zero, print "...amount is invalid"
    if(overnightFeePerOunce < 0) {
        std::cout << "The overnight fee per ounce amount is invalid" << std::endl;
        this->fee = 0;
    }
    else{
        this->fee = overnightFeePerOunce;
    }
}
