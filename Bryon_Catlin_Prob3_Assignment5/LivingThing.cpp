#include <iostream>



class LivingThing {
    public:
    //method
    virtual void printInfo() const {
        std::cout << "LivingThing" << std::endl;
    }
};

class Plant : public LivingThing {
    public:
    void printInfo() const override {
        std::cout << "Plant" << std::endl << "|" << std::endl;
    }
};

class Flower : public Plant {
    public:
    void printInfo() const override {
        Plant::printInfo();
        std::cout << "Flower" << std::endl;
    }
};

class Animal : public LivingThing {
    public:
    void printInfo() const override {
        std::cout << "Animal" << std::endl << "|" << std::endl;
    }
};

class Mammal : public Animal {
    public:
    void printInfo() const override {
        Animal::printInfo();
        std::cout << "Mammal" << std::endl << "|" << std::endl;
    }
};

class Cat : public Mammal {
    public:
    void printInfo() const override {
        Mammal::printInfo();
        std::cout << "Cat" << std::endl;
    }
};

class Tiger : public Cat {
    public:
    void printInfo() const override {
        Cat::printInfo();
        std::cout << "Tiger" << std::endl << "|" << std::endl;
    }
};

class Fish : public Animal {
    public:
    void printInfo()const override {
        Animal::printInfo();
        std::cout << "Fish" << std::endl << "|" << std::endl;
    }
};

class Sardine : public Fish {
    public:
    void printInfo() const override {
        Fish::printInfo();
        std::cout << "Sardine" << std::endl ;
    }
};

class Bass : public Fish {
    public:
    void printInfo() const override {
        Fish::printInfo();
        std::cout << "Bass" << std::endl;
    }
};

void printLivingThingTree(const LivingThing& other) {
    other.printInfo();
}

int main(void) {
    
    std::cout << "\nThe class tree for Flower class" << std::endl;
    Flower flower;
    printLivingThingTree(flower);
    std::cout << "\nThe class tree for Sardine class" << std::endl;
    Sardine sardine;
    printLivingThingTree(sardine);
    std::cout << "\nThe class tree for Cat class" << std::endl;
    Cat cat;
    printLivingThingTree(cat);

    return 0;
}