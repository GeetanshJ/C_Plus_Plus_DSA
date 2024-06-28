#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<limits>
#include "dog.h"
using namespace std;

void dogDoingSomething(Dog*&dog){
    dog->bark();
    dog->eat();
}

int main() {
    Dog* dog = new Pitbull();
    dogDoingSomething(dog);
}