#ifndef MYSET_H
#define MYSET_H

class MySet {
    public:
    //constructor
    MySet(unsigned int range_);
    //copy constructor
    MySet(const MySet &other);
    //destructor
    ~MySet();

    //method
    void insertElement(int k);
    void deleteElement(int m);
    void printSet();
    bool isEqualTo(const MySet&);

    private:
    unsigned int range;
    int size = 0;
    bool * set;
    bool pSet = &set;
};

#endif