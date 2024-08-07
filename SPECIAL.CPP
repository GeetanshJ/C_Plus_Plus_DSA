//   HEAP MEMORY=>

there are two types of memory heap and stack by default heap is large and stack is small and in stack variable and function parameter are
stored and when we write int a = 10 stack memory  is used but when int* a = new int is used then heap memory is used and new int
means address is returned and stores in pointer




// POINTERS

    int * ptr = &a;
    int * ptr = new int; BOTH ARE DIFFERENT AS IN FIRST CASE POINTER IS STORED IN STACK IN SECOND CASE ALSO IN STACK BUT POINTING
    TO MEMORY IN HEAP

    int * ptr = NULL;
    cout << *ptr << " garbage value if do not write any value if 0 or null it will print nothing";

    IN CASE OF ARRAY  arr = &arr = &arr[0]   because arr is mapped in symbol table in case of int * p =  arr p is allocated other arr is at other
    REMEMBER ARR[I] IS SOLVED AS *(ARR + I) ALSO ARR[I] === I[ARR]

    arr is a constant pointer so we cannot do arr += 1;

    char ch = 'p';
    char * ptr = &ch;
    cout << ptr << " ";
    ALONG WITH THE CHAR GARBAGE VALUE BE PRINTED  AND IF ARRAY IS PASSED ONLY POINTER OF FIRST ADDRESS IS PASSED AND
    ALSO NEW POINTER IS CREATED SO ARR != &ARR IN CASE OF POINTER PASSED AS FUNCTION

    WILD POINTERS =>  THOSE POINTERS WHO ARE NOT INITIALISED OR ACCESSED AFTER DELETE
    int* ptr  ;
    delete ptr;
    cout << *ptr;

    VOID POINTERS => THOSE WHO HAVE VOID AS DATA TYPE AND  CAN ACCESS ANY DT USING static_cast<*int>(ptr)
    int x = 10;
    void * ptr = &x;
    cout << *static_cast<int*>(ptr);

    FUNCTION POINTERS
    int (*FunctionPointers[])(int,int) = {add,sub};
    cout << FunctionPointers[1](1,6);


    // CONST 


    CASE 1 => const int* a = new int(2);   =>  CONST DATA NON-CONST POINTER
    int b = 10,a = &b;
    const int* a === int const *a

    CASE 2 =>  int * const a = new int => CONST POINTER NON-CONST DATA
    CASE 3 = > const int* const a = new int

    MUTABLE => in case of const function the variable inside it cannot be change but if we want to change we use mutable keyword mutable int a;

    ****** lvalue = variable having memory location   rvalue = var having no memory location

    r value 
    int b = 4;
    int &a = b;    a is alias of b location of b = a




    // INITIALISATION LIST

    abc(int a,int b) : this->var1(val1),this->var2(val2){};

    BENEFIT OF USING IL IS THAT IF WE HAVE INITALIZED CONST VAR THEN WE CANNOT ASSIGN VALUE INSIDE OLD CONSTRUCTOR WAY BUT CAN DO IN NEW


abc{
    public:
    const int z;
    abc(int _z = 0){
        z = _z;  // ERROR 
    }



        // MACROS

        #define PI = 3.14;
        IT MEANS BEFORE CODE IS COMPILED THERE IS A STEP CALLED PRE PROCESSING WHERE COMPILER WILL REPLACE THE VAR WITH volatile

        area(){
            PI;
        }
}




    // ABSTRACTION >  VIRTUAL VS PURE VIRTUAL FUNCTION


Feature	                                   Virtual Function	                                        Pure Virtual Function


Definition	                            A function in a base class with a                           A function in a base class with no implementation,
                                        default implementation that can be                          forcing derived classes to override it.
                                        overridden in derived classes
    
Syntax	                                virtual void functionName() { ... }	                        virtual void functionName() = 0;

Implementation in Base Class	        Yes 	                                                    No

Overriding in Derived Class	            Optional	                                                Mandatory

Class Instantiation	                    The class can be instantiated.	                            The class is abstract and cannot be instantiated.

Purpose	                                To provide a common interface                               To enforce that derived classes must implement the function.
                                        with optional overriding



Yes, a class containing at least one pure virtual function is called an abstract class in C++.
Abstract classes cannot be instantiated directly;
they serve as base classes for other classes that implement the pure virtual functions.








    // 2D-ARRAY

    