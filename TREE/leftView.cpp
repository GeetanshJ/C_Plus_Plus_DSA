#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<cmath>
#include<unordered_map>
#include<limits>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* createTree(){
    int data;
    cin >> data;

    Node* root = new Node(data);

    if(root->data == -1) return NULL;

    cout << "Enter value of left child of " << data << " ";
    root->left = createTree();

    cout << "Enter value of right child of " << data << " ";
    root->right = createTree();

    return root;
}

void leftView(Node*  root,vector<int>&ans,int level){
    if(root == NULL) return ;

    if(ans.size() == level){
        ans.push_back(root->data);
    }

    leftView(root->left,ans,level+1);
    leftView(root->right,ans,level+1);
}


int main() {
    Node* root = new Node(10);
    root = createTree();
    vector<int>ans;
    leftView(root,ans,0);

    for(int i : ans) cout << i << "  ";

}
