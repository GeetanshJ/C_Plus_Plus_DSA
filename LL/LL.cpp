// #include <iostream>

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// int length(Node*& head) {
//     int len = 0;
//     Node* temp = head;
//     while (temp != nullptr) {
//         temp = temp->next;
//         len++;
//     }
//     return len;
// }

// void print(Node*& head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         if (temp->next != nullptr)
//             std::cout << temp->data << " -> ";
//         else
//             std::cout << temp->data;
//         temp = temp->next;
//     }
//     std::cout << std::endl;
// }

// void insertAtHead(Node*& head, Node*& tail, int data) {
//     if (head == nullptr) {
//         Node* temp = new Node(data);
//         head = temp;
//         tail = temp;
//         return;
//     }
//     Node* temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }

// void insertAtTail(Node*& head, Node*& tail, int data) {
//     if (head == nullptr) {
//         Node* temp = new Node(data);
//         head = temp;
//         tail = temp;
//         return;
//     }
//     Node* temp = new Node(data);
//     tail->next = temp;
//     tail = temp;
// }

// void insertAtAnyPosition(Node*& head, Node*& tail, int data, int position) {
//     if (head == nullptr) {
//         Node* temp = new Node(data);
//         head = temp;
//         tail = temp;
//         return;
//     }
//     if (position <= 1) {
//         insertAtHead(head, tail, data);
//         return;
//     }
//     int len = length(head);
//     if (position >= len) {
//         insertAtTail(head, tail, data);
//         return;
//     }
//     int i = 1;
//     Node* prev = head;
//     while (i < position - 1) {
//         i++;
//         prev = prev->next;
//     }
//     Node* curr = prev->next;
//     Node* newNode = new Node(data);
//     newNode->next = curr;
//     prev->next = newNode;
// }

// void deleteAtAnyPosition(Node*& head, Node*& tail, int position) {
//     if (head == nullptr || position <= 0) {
//         std::cout << "Invalid position or list is empty." << std::endl;
//         return;
//     }
//     if (position == 1) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         if (head == nullptr) {
//             tail = nullptr;
//         }
//         return;
//     }
//     int len = length(head);
//     if (position >= len) {
//         Node* curr = head;
//         int i = 1;
//         while (i < position - 1) {
//             curr = curr->next;
//             ++i;
//         }
//         curr->next = nullptr;
//         tail = curr;
//         return;
//     }

//     Node* curr = head;
//     int i = 1;
//     while (i < position - 1) {
//         curr = curr->next;
//         ++i;
//     }
//     Node* toDelete = curr->next;
//     curr->next = toDelete->next;
//     delete toDelete;
// }

// SINGLE LL
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

int lengthOfLL(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    cout << len << endl;
    return len;
}

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->next != nullptr)
        {
            cout << temp->data << " -> ";
        }

        else
        {
            cout << temp->data;
        }

        temp = temp->next;
    }
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == nullptr)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }

    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == nullptr)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }

    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtAnyPosition(Node *&head, Node *&tail, int data, int position)
{
    if (head == nullptr)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }

    if (position <= 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    int len = lengthOfLL(head);
    if (len <= position)
    {
        insertAtTail(head, tail, data);
        return;
    }

    Node *prev = head;
    while (position - 1 > 1)
    {
        prev = prev->next;
        position--;
    }

    Node *nextNode = prev->next;
    Node *newNode = new Node(data);
    prev->next = newNode;
    newNode->next = nextNode;
    return;
}


void reverseLL(Node*& head, Node*& tail) {
    if (head == nullptr) return;

    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    tail = head;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;

    insertAtHead(head, tail, 80);
    insertAtHead(head, tail, 70);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 50);

    insertAtTail(head, tail, 90);
    insertAtTail(head, tail, 100);
    insertAtTail(head, tail, 110);

    insertAtAnyPosition(head, tail, 40, 1);
    insertAtAnyPosition(head, tail, 120, 8);

    reverseLL(head, tail);

    printLL(head);

    return 0;
}