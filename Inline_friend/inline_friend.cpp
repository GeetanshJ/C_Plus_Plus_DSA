#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<limits>
using namespace std;

class A{
    private:
        int x;

    public:
        int getX() {
            return x;
        }


        void setX(int x){
            this->x = x;
        }

    friend class B;
};

class B{
    public:
        void print(A &obj){
            cout << obj.x;
        }
};

int main() {
    A a;
    a.setX(5);

    B b;
    b.print(a);
}



// INLINE FUNCTION IS USED TO REDUCE THE OVERHEAD CALL STACK FUNCTION CALL IT WILL SIMPLY DO IT WILL HIDE THE
// FUNCTION AD WILL RUN THE FUNCTION AS INDIVIDUAL LINE IN MAIN FUNCTION LIKE CODE IS IN MAIN 

// for function  => friend void print(int a,int b)  example  
// for class => friend class B
// FRIEND IS USED TO ACCESS PVT AND PROTECTED MEMBER OF A CLASS