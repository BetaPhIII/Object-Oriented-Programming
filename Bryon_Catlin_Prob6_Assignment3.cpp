#include <iostream>
#include <string>

class Spaceship {
    public:
    //default constructor initalizin values of position
    Spaceship() {
        xCoordinate = 0;
        yCoordinate = 0;
        position = "{x: 0, y: 0, Direction: 'Up'}";
    }
    //user defined constructor that takes a string
    Spaceship(const std::string& path){
        //loop through string path and check each character
        for(int i = 0; i<path.size(); i++){
            //if path is L or R decrement/increment the direction int
            if(path[i] == 'L') {
                if(direction == 0) {direction = 3;}
                else{direction--;}
            }
            else if(path[i] == 'R') {
                if(direction == 3) {direction = 0;}
                else{direction++;}
            }
            //if advancing check direction then increment coordinate in found direction
            else if(path[i] == 'A') {
                if(direction == 0) {
                    yCoordinate--;
                }
                else if(direction == 1) {
                    xCoordinate++;
                }
                else if(direction == 2) {
                    yCoordinate++;
                }
                else if(direction == 3) {
                   xCoordinate--; 
                }
            }
        }
        //check final direction for cout
        std::string finalDir = "-";
        if(direction == 0) {
            finalDir = "Up";
        }
        else if(direction == 1) {
            finalDir = "Right";
        }
        else if(direction == 2) {
            finalDir = "Down";
        }
        else if(direction == 3) {
            finalDir = "Left";
        }
        //set string position to final values
        setPosition(xCoordinate, yCoordinate, finalDir);
    }
    std::string getPosition() {
        return position;
    }
    void setPosition(const int xCo,const int yCo, const std::string finalDir_) {
        position = "{x:" + std::to_string(xCo) + ", y: " + std::to_string(yCo) + ", direction: " + finalDir_ + "}";
    }
    private:
    //initialize variables privately
    std::string position = "{x: X, y: Y, direction: 'Direction'}";
    int yCoordinate = 0;
    int xCoordinate = 0;
    int direction = 0;
};

int main(void) {
    //create spaceship object with default constructor
    Spaceship astrochuckler;
    std::cout << astrochuckler.getPosition() << std::endl;
    
    //create spaceship object with given path
    Spaceship lunacycle("RAALALL");
    std::cout << lunacycle.getPosition() << std::endl;
    
    //create spaceship object with given path
    Spaceship quirkonaut("AAAARAARLAAAARAAARRAAAALLLA");
    std::cout << quirkonaut.getPosition() << std::endl;
    
    //create spaceship object with an empty path string
    Spaceship zanyverse("");
    std::cout << zanyverse.getPosition() << std::endl;
    
    //create spacehship object with given path 
    Spaceship cosmocomedy("LAAA");
    std::cout << cosmocomedy.getPosition() << std::endl;
    return 0;
}