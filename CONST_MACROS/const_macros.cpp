#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<limits>
using namespace std;

class A{
    public:
    int a;
    int b;

    A(int _a , int _b){
        a = _a;
        b = _b;
    }

    int getA(){
        return a;
    }

    int getB(){
        return b;
    }
};

void function_main(const A& obj){
        cout << obj.getA() << " " << obj.getB();
}


// #define MAX(x,y) (x > y ? x : y)

int main() {
    // cout << MAX(1,2);

    A obj(1,2);
    function_main(obj);
}