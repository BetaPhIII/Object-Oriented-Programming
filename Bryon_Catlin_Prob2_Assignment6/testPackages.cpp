#include "Package.cpp"
#include "TwoDayPackage.cpp"
#include "OvernightPackage.cpp"
#include "iostream"

int main(void) {
    //create object of Package class and print objects info
    Package p1("John Smith", "1020 Orange St", "Lakeland", "FL", 33111, 10.5, 0.4);
    p1.printPackageInfo();
    //create object of TwoDayPackage class and print objects info
    TwoDayPackage p2("Bob George", "21 Pine Rd", "Cambridge", "MA", 44444, 10.5, 0.65, 2.0);
    p2.printPackageInfo();
    //create object of OvernightPackage class and print objects info
    OvernightPackage p3("Don Kelly", "9 Main St", "Denver", "CO", 66666, 12.25, 0.7, 0.25);
    p3.printPackageInfo();

    return 0;
}