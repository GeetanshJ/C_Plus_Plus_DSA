#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<unordered_map>
#include<limits>
using namespace std;

int main() {
    int arr[]= {1,4,2,3,5,6};
    int n = 6;

    for(int i = 1;i < n; i++){
        for(int j = 0;j < n - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }


    for(int i  :arr){
        cout << i << " ";
    }
}