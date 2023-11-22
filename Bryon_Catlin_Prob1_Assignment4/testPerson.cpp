#include "Person.cpp"
#include <iostream>
#include <string>

int main(void) {
    
    //create person Clementine with age 21
    Person* pPer = new Person("Clementine", 21);
    //print person data
    pPer->printPerson();

    //create person2 with same data as person1
    Person* pPer2 = new Person(*pPer);
    //delete memory allocated for pPer
    delete pPer;
    //print pPer2 data
    pPer2->printPerson();
    //delete memory allocated for pPer2
    delete pPer2;

    return 0;
    
}