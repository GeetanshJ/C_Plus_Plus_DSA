
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<limits>
using namespace std;


struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
};

TreeNode* createTree(){
    int data;
    cin >> data;

    TreeNode* root = new TreeNode(data);

    if(root->data == -1) return NULL;

    cout << "Enter value of left child of " << data << " ";
    root->left = createTree();

    cout << "Enter value of right child of " << data << " ";
    root->right = createTree();

    return root;
}




TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return nullptr;
        if(root->data == p->data) return p;
        if(root->data == q->data) return q;
        
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);

        
        if(left == NULL && right == NULL) return NULL;
        if(left != NULL && right == NULL) return left;
        if(left == NULL && right != NULL) return right;
        
        return root;
}

int main(){
    TreeNode * root = new TreeNode(10);
    TreeNode* p = new TreeNode(30);
    TreeNode* q = new TreeNode(20);
    root = createTree();
    cout << lowestCommonAncestor(root,p,q)->data;
}