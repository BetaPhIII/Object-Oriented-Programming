#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
#include <iostream>
#include <iomanip>

class Package {
    public:
    //constructor
    Package(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double weight, double cost);
    //mutator functions
    void setWeight(const double& weight);
    void setCostPerOunce(const double& costPerOunce);
    //virtual function so can be overwritten in derived classes
    virtual double calculateCost();
    void printPackageInfo();

    protected:
    //protected variables will be seen by derived classes
    std::string name;
    std::string address;
    std::string city;
    std::string state;
    int ZIP;
    double weight;
    double cost;
    //declare static int for memberID
    static int memberID;
};

#endif