#include "TwoDayPackage.h"

//constructor for two day package which inherits constructor data from parent class Package
TwoDayPackage::TwoDayPackage(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double weight, double cost, double fee) : Package(name, address, city, state, ZIP, weight, cost) {
    //set flat fee from user-defined constructor
    this->flatFee = fee;
}

//mutator function for flatFee
void TwoDayPackage::setFlatFee(const double& flatFee){
    //if flatFee is less than 0 print "...amount is invalid"
    if(flatFee<0) {
        std::cout << "The fee amount is invalid";
        this->flatFee = 0;
    }
    else{
        this->flatFee = flatFee;
    }
}
//overwrite function for calculate cost
double TwoDayPackage::calculateCost(){
    return (cost*weight)+flatFee;
}
