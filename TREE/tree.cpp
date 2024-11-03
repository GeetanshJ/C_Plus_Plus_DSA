#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<limits>
#include<queue>

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
    
    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);

    cout << "Enter value for left child of " << data << " ";
    root->left = createTree();

    cout << "Enter value for right child of " << data << " ";
    root->right = createTree();

    return root;
}

void levelOrder(Node*& root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }

        
    }
}

int main() {
    Node* root = new Node(10);
    root = createTree();
    levelOrder(root);

}