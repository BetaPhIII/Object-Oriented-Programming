#include <iostream>
#include <string>

class Stock {
    public:
    //user defined constructor initializing symbol and name to defined values
    Stock(std::string sym_, std::string name_) {
        symbol = sym_;
        name = name_;
    }
    //get functions for symbol, name, currentPrice, and previousClosingPrice
    std::string getSymbol() const {
        return symbol;
    }
    std::string getName() const {
        return name;
    }
    double getPreviousClosingPrice() const {
        return previousClosingPrice;
    }
    double getCurrentPrice() const {
        return currentPrice;
    }

    //set functions for previousClosingPrice and setCurrentPrice
    void setPreviousClosingPrice(double prevPrice_) {
        previousClosingPrice = prevPrice_;
    }
    void setCurrentPrice(double currPrice_) {
        currentPrice = currPrice_;
    }

    //method for getPercentChange calculation
    double getPercentChange() {
        return (1- (getPreviousClosingPrice()/getCurrentPrice()));
    }
    private:
    //initialize variables privately
    std::string symbol = "-";
    std::string name = "-";
    double previousClosingPrice = 0;
    double currentPrice = 0;
};

int main(void) {
    //create Stock object nvididiaStock with user defined symbol and name
    Stock nvidiaStock("NVDA","NVIDIA Corp.");
    
    //call set functions
    nvidiaStock.setPreviousClosingPrice(27.5);
    nvidiaStock.setCurrentPrice(27.6);

    //print final values and call getPercentChange function
    std::cout << "Previous Closing Price: " << nvidiaStock.getPreviousClosingPrice() << std::endl;
    std::cout << "Current Price: " << nvidiaStock.getCurrentPrice() << std::endl;
    std::cout << "Percentage Change: " << nvidiaStock.getPercentChange() << std::endl;
    return 0;
}