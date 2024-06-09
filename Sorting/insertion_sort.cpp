#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<unordered_map>
#include<limits>
using namespace std;

int main() {
    int n = 6;
    vector<int>arr = {7,4,3,2,5,1};

    for(int i = 1;i < n; i++){
        int val = arr[i];
        int j = i-1;
        
        for(;j >= 0; j--){
            if(val < arr[j]){
                arr[j+1] = arr[j];
            }

            else{
                break;
            }
        }

        arr[j+1] = val;
    }


    for(int i : arr){
        cout << i << " ";
    }
}