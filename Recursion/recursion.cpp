// CODE FOR MINIMUM NUMBER OF COINS USING RECURSION

// #include<iostream>
// #include<vector>
// #include<string>
// #include<cmath>
// #include<unordered_map>
// #include<climits>
// using namespace std;

// int solve(vector<int> &arr, int target){
//     if(target == 0){
//         return 0;
//     }

//     else if( target < 0){
//         return INT_MAX;
//     }

//     int mini = INT_MIN;
//     for(int i = 0;i < arr.size() ;i++){
//         int midAns = solve(arr,target - arr[i]);
//         if(midAns != INT_MAX){
//             mini = min(mini, midAns + 1);
//         }
//     }

//     return mini;
// }
// int main() {
//     int target = 15;
//     vector<int> arr = {1,2,3,4};

//     int ans = solve(arr,target);
//     cout << ans;
// }






















// // SUBSEQUENCE OF A STRING

// #include<iostream>
// #include<vector>
// #include<string>
// #include<cmath>
// #include<unordered_map>
// #include<limits>
// using namespace std;

// void solve(string &str,string output, int i){
//     if(i == str.size()){
//         cout << output << " ";
//         return;
//     }

//     solve(str,output + str[i] , i+ 1 );
//     solve(str,output,i+1);

// }
// int main() {
//     string str = "ABCD";
//     string output = "";

//     solve(str,output,0);
// }
