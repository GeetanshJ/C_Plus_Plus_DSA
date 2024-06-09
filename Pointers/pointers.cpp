#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<unordered_map>
#include<limits>
using namespace std;
// int add(int a,int b){
//     return a+b;
// }

// int sub(int b,int c){
//     return b+c;
// } 
int main() {
    // int a  =5;
    // int * b = &a;
    // int** c = &b;
    // int*** d = &c;

    // cout << "c address d " << d << endl;
    // cout << "d address &d " << &d << endl;
    // cout << "b address *d " << *d << endl;
    // cout << "a address **d " << **d << endl; 
    // cout << "a value ***d " << ***d ; 



    // THIS IS CALLED NULL POINTER
    // int * ptr = NULL;
    // cout << *ptr << " garbage value if do not write any value if 0 or null it will print nothing";




    // IN CASE OF ARRAY  arr = &arr = &arr[0]   because arr is mapped in symbol table i case of int * p =  arr p is allocated other arr is at other
    // REMEMBER ARR[I] IS SOLVED AS *(ARR + I) ALSO ARR[I] === I[ARR]
    // *******  int arr[] = {1,2,3,4};
    // cout << 4[arr];

    // arr is a constant pointer so we cannot do arr += 1;



    // CHAR ARRAYS
    // char arr[] = "ABCDEFG";
    // char * ptr = arr;
    // cout << ptr << " " << arr;   HERE ABCDEFG WILL PRINT IN CASE OF INT ADDRESS OF POINTER WILL BE PRINT BECAUSE COUT IMPLEMENTATION FOR INT AND CHAR IS DIFFERENT ALSO FOR ARR + 2 STRING FROM 2ND POS WILL PRINT

    // *******************************************
    // char ch = 'p';
    // char * ptr = &ch;
    // cout << ptr << " ";
    // ALONG WITH THE CHAR GARBAGE VALUE BE PRINTED  AND IF ARRAY IS PASSED ONLY POINTER OF FIRES ADDRESS IS PASSED AND
    //  ALSO NEW POINTER IS CREATED SO ARR != &ARR IN CASE OF POINTER PASSED AS FUNCTION









    //  WILD POINTERS =>  THOSE POINTERS WHO ARE NOT INITIALISED OR ACCESSED AFTER DELETE
    // int* ptr  ;
    // delete ptr;
    // cout << *ptr;


    // VOID POINTERS => THOSE WHO HAVE VOID AS DATA TYPE AND  CAN ACCESS ANY DT USING static_cast<*int>(ptr)
    // int x = 10;
    // void * ptr = &x;
    // cout << *static_cast<int*>(ptr);




    // FUNCTION POINTERS

    // int (*FunctionPointers[])(int,int) = {add,sub};
    // cout << FunctionPointers[1](1,6);
    


    int a = 1,b=8;
    int*  ptr = &a;
    int*  ptr1 = ptr;

    *ptr = 6;
    cout << &ptr << " " << &ptr1  << "   " << *ptr << " " <<*ptr1;;

}