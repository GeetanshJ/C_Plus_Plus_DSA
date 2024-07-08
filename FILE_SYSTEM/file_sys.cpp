#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<limits>
#include<fstream>
using namespace std;

int main() {
// Class	    Description

// ofstream	Creates and writes to files
// ifstream	Reads from files
// fstream	    A combination of ofstream and ifstream: creates, reads, and writes to files

ofstream file("MyFile.txt");

file << "This is to inform you that i am bond";
file.close();
cout << "File Created" << endl; 


string myText;
ifstream readFile("MyFile.txt");
while(getline(readFile,myText)){
    cout << myText;
}
readFile.close();
}