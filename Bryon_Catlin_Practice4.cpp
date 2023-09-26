#include <iostream>

class Account{
    private:
    int id = 0;
    double balance = 0;
    double annualInterestRate = 0;
    public:
    Account(int id, double balance, double annualInterestRate) {
        setId(id);
        setBalance(balance);
        setAnnualInterestRate(annualInterestRate);
    }
    int getId(){
        return id;
    }
    int getBalance() {
        return balance;
    }
    void setId(int newID) {
        if(newID<0) {
            id = 0;
        }
        else {id = newID;}
    }
    void setBalance(int newBal) {
        if(newBal<0) {
            balance = 0;
        }
        else{balance = newBal;}
    }
    void setAnnualInterestRate(double newAIR) {
        if(newAIR<0) {
            annualInterestRate = 1;
        }
        else{annualInterestRate = newAIR;}
    }
    double getMonthlyInterest(){
        double monthlyInterest = balance*(annualInterestRate/12);
        return monthlyInterest;
    }
    void withdraw(double withdrawAmt){
        if(balance<withdrawAmt) {
            std::cout <<"Cannot withdraw greater than account amount"<<std::endl;
            return;
        }
        else{
        balance = balance-withdrawAmt;
        }
    }
    void deposit(double depositAmt){
        balance = balance+depositAmt;
    }
    
};

int main(void) {
    Account acc(-1, 20000.0, 0.045);
    
    acc.withdraw(25000);
    std::cout <<"ID is " << acc.getId() <<std::endl;
    acc.deposit(3000);
    std::cout<<"Balance is: $" << acc.getBalance() <<std::endl;
    std::cout << "Monthly interest is " << acc.getMonthlyInterest();

    return 0;
}