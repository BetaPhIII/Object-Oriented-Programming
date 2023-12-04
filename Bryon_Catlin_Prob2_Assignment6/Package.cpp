#include "Package.h"

//initialize static variable memberID
int Package::memberID = 0;

//base constructor for Package parent class
Package::Package(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double weight, double cost){
    //set all of the current object's variables to user-defined variables
    this->name = name;
    this->address = address;
    this->city = city;
    this->state = state;
    this->ZIP = ZIP;
    this->weight = weight;
    this->cost = cost;
    
    //increment memberID for each object created
    memberID++;
}

//mutator function to set Package weight
void Package::setWeight(const double& weight) {
    //if weight is less than 0, print weight is invalid
    if(weight<0) {
        std::cout << "The weight is invalid" << std::endl;
        this->weight = 0;
    }
    //if weight is not less than zero, set package weight to user defined value
    else {
        this->weight = weight;
    }
}

//mutator function for costPerOunce
void Package::setCostPerOunce(const double& costPerOunce) {
    //if costPerOunce is less than zero print cost is invalid
    if(costPerOunce<0) {
        std::cout << "The cost per ounce is invalid" << std::endl;
        this->cost = 0;
    }
    //else set package's costPerOunce to user-defined costPerOunce
    else{
        this->cost = costPerOunce;
    }
}

//function for calculating package's cost
double Package::calculateCost() {
    return cost*weight;
}
//print package info in specified format
void Package::printPackageInfo() {
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Package id " << memberID << ":\n" << std::endl;
    std::cout << name << std::endl;
    std::cout << address << std::endl;
    std::cout << city << ", " << state << " " << ZIP << std::endl << std::endl;
    std::cout << "Cost: $" << std::fixed << std::setprecision(2) << calculateCost() << std::endl;
    std::cout << "-------------------------------------" << std::endl;
}