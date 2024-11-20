#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<limits>
using namespace std;

void createKMP(string& path, vector<int>& res){
    int i = 1,len = 0;
    res[0] = 0;

    while(i < path.size()){
        if(path[i] == path[len]){
            len++;
            res[i] = len;
            i++;
        }

        else{
            if(len != 0){
                len = res[len - 1];
            }

            else{
                res[i] = 0;
                i++;
            }
        }
    }
}

void solveKMP(string& str,string& path){

    vector<int>res(path.size());
    createKMP(path,res);

    int i = 0,j = 0;

    while(i < str.size()){
        if(str[i] == path[j]){
            i++;
            j++;

            if(j == res.size()){
                cout << i - j << " ";

                j = res[j - 1];
            }
        }

        else{
            if(j != 0) j = res[j - 1];
            else i++;
        }
    }
}

int main() {
    string str = "abceababcdefghabcrababcdababcd";
    string path = "ababcd";

    solveKMP(str,path);
}