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

void bottomView(Node*  root){
    if(root == NULL) return ;

    unordered_map<int,int> map;
    queue<pair<Node*,int>> q;
    q.push({root,0});

    while(!q.empty()){
        Node* front_node = q.front().first;
        int hd = q.front().second;

        q.pop();

        map[hd] = front_node->data;
        

        if(front_node -> left){
            q.push({front_node->left, hd - 1});
        }

        if(front_node -> right){
            q.push({front_node->right, hd + 1});
        }
    }

    for(auto i : map){
        cout << i.second << " ";
    }
}


int main() {
    Node* root = new Node(10);
    root = createTree();
    bottomView(root);

}
