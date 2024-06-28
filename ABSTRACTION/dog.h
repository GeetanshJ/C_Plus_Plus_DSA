#if !defined(DOG_H)
#define DOG_H
#include<iostream>
using namespace std;

class Dog{
    public:
    virtual void eat() = 0;
    virtual void bark() = 0;
};


class German: public Dog{
    void bark(){
        cout << "German Shepherd is barking "  << endl;
    }

    void eat(){
        cout << "German Shepherd is eating " << endl;
    }
};


class Pitbull: public Dog{
    void bark(){
        cout << "Pitbull is barking " << endl;
    }

    void eat(){
        cout << "Pitbull is eating "  << endl;
    }
};


class Husky: public Dog{
    void bark(){
        cout << "Husky is barking " << endl;
    }

    void eat(){
        cout << "Husky is eating " << endl;
    }
};
#endif
