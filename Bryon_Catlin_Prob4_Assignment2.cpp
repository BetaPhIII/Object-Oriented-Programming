#include <iostream>
#include <time.h>
#include <stdlib.h>

int main(void) {
    //initialize random seed for each second
    srand(time(0));
    //initialize variables
    int sum = 0;
    int point = 0;

    //roll dice until condition is met
    
        int die1 = rand()%6+1;
        int die2 = rand()%6+1;
        sum = die1+die2;

        //check loss conditions
        if(sum == 2 || sum == 3 || sum == 12) {
            std::cout << "You rolled " << die1 << " + " << die2 << " = " << sum<< std::endl;
            std::cout<< "You lose!" << std::endl;
        }

        //check win conditions
        else if(sum == 7 || sum == 11) {
            std::cout << "You rolled " << die1 << " + " << die2 << " = " << sum<< std::endl;
            std::cout<< "You win!" << std::endl;
        }

        //set point
        else {
            point = sum;
            std::cout << "You rolled " << die1 << " + " << die2 << " = " << sum << std::endl;
            std::cout<< "Point is " << sum <<std::endl;
            while(1) {
                int die1P = rand()%6+1;
                int die2P = rand()%6+1;
                int sum2 = die1P+die2P;
                if(sum2 == 7) {
                    std::cout << "You rolled " << die1P << " + " << die2P << " = " << sum2<< std::endl;
                    std::cout << "You lose!" <<std::endl;
                    break;
                }
                else if(sum2 == point) {
                    std::cout << "You rolled " << die1P << " + " << die2P << " = " << sum2<< std::endl;
                    std::cout<< "You win!" << std::endl;
                    break;
                }
            }
        }

    return 0;
}