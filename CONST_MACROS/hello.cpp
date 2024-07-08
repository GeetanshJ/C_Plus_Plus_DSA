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
    virtual void run() {
        cout << "A";
    }
};

class B{
    public:
    void run() {
        cout << "B";
    }
};


class C: public B{
    public:
    void run() {
        cout << "C";
    }
};

int main() {
    B *obj = new C();

    obj->run();
}