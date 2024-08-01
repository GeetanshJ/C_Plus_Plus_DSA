#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<limits>
using namespace std;

// shallow means the variable for both object share same memory location but in deep they will have different location
class A{
    public:
    int a;
    int* b;

    A(int _x , int _y){
        a = _x;
        b = new int(_y);
    }

    // SHALLOW

    A(A& obj ){
        a = obj.a;
        b = obj.b;
    }

    // DEEP

    A(A& obj ){
        a = (obj.a);
        b = new int (*obj.b);
    }
};
int main() {
    A obj(1,1);

    A obj1 = obj;

    *obj.b = 4;

    cout << obj.a << " " << obj.b << " " << *obj.b << endl;
    cout << obj1.a << " " << obj1.b << " " << *obj1.b;

    vector<int> arr = {1,5,3,2,1};

    sort(arr.end() , arr.begin());

    for(int i : arr){
        cout << i << " ";
    }

}