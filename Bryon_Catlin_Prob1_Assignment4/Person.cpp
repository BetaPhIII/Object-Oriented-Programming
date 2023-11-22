#include "Person.h"
#include <iostream>
#include <cstring>

Person::Person(const char* name, int age) {
    //set age and dynamically allocate memory for name
  this->age=age;
  this->name= new char[strlen(name)];

    //change name of object to equal the inputted name
  for(int i=0; i<strlen(name); i++){
    this->name[i]=name[i];
  }
    //add null character to the end of the string
  this->name[strlen(name)]='\0';
}

Person::Person(const Person& other) {
    //set age equal to inputted object age
    age=other.age;
    //allocate memory for name char array
    name= new char[strlen(other.name)+1];

    //set this objects name to inputted objects name
    for(int i=0; i<strlen(other.name); i++){
        name[i]=other.name[i];
    }
    //add null character
    name[strlen(other.name)]='\0';
}

Person::~Person() {
    //delete memory allocated for name
    delete name;
}

void Person::printPerson() {
    //print age and name
    std::cout << age <<std::endl;
    for(int i = 0; i < strlen(name); i++) {
        std::cout << name[i];
    }
    std::cout << std::endl;
}