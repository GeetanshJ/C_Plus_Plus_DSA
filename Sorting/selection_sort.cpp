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

    for(int i = 0;i < n; i++){
        int mini = i;
        for(int j = i+1;j < n; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }

        swap(arr[i] , arr[mini]);
    }


    for(int i  :arr){
        cout << i << " ";
    }
}