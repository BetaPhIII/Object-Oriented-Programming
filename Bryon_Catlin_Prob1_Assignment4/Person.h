#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
    public:
    //constructor
    Person(const char* name, int age);

    //copy constructor
    Person(const Person& other);

    //destructor
    ~Person();

    //method
    void printPerson();

    private:
    char * name = nullptr;
    int age;
};

#endif