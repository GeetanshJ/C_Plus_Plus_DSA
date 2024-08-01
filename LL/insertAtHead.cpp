// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// #include<cmath>
// #include<unordered_map>
// #include<limits>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// void insertAtHead(Node*&head,Node*&tail,int data){
//     if(head == NULL){
//         Node* temp = new Node(data);
//         head = temp;
//         tail = temp;
//         return;
//     }

//     Node* temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }

// void insertAtTail(Node*&head,Node*&tail,int data){
//     if(head == NULL){
//         Node* temp = new Node(data);
//         head = temp;
//         tail = temp;
//         return;
//     }

//     Node* temp = new Node(data);
//     tail->next = temp;
//     tail = temp;

// }
// int main() {
//     Node* head = NULL;
//     Node* tail = NULL;
//     insertAtHead(head,tail,10);
//     insertAtHead(head,tail,20);
//     insertAtHead(head,tail,30);
//     insertAtHead(head,tail,40);
//     insertAtTail(head,tail,0);

//     print(head);
// }





















#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<limits>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

int findLength(Node *& head){
    int len = 0;
    Node* newNode = head;
    while(newNode != nullptr){
        len++;
        newNode = newNode->next;
    }

    return len;
}

void insertAtHead(Node*&head,Node*&tail,int data){
    if(head == nullptr){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node*&head,Node*&tail,int data){
    if(head == nullptr){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtAnyPosition(int position,Node*&head,Node*&tail,int data){
    if(head == nullptr){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(position == 0){
        insertAtHead(head,tail,data);
        return;
    }

    int len = findLength(head);
    if(position >= len){
        insertAtTail(head,tail,data);
        return;
    }

    Node* prev = head;
    int i = 1;
    while(i < position){
        prev = prev -> next;
        i++;
    }

    
    Node* curr = prev->next;
    Node* newNode = new Node(data);
    
    newNode->next = curr;
    prev->next = newNode;
}

void print(Node *& head){
    Node* newNode = head;
    while(newNode != nullptr){
        cout << newNode->data << " ";
        newNode = newNode->next;
    }
}


int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    insertAtHead(head,tail,100);
    insertAtHead(head,tail,200);
    insertAtHead(head,tail,300);
    insertAtHead(head,tail,400);

    insertAtTail(head,tail,50);

    insertAtAnyPosition(9,head,tail,500);

    print(head);
}