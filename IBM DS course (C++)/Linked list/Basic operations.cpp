#include<iostream>
using namespace std;
class Node{
public:
    int Val;
    Node* next;
};

class LinkedList{
public:
    Node *head, *tail;
    LinkedList() //constructor
    {
        head = NULL;
        tail = NULL;
    }

    void insertElementAtFront(int val)
    {
    Node* newNode = new Node;
    newNode->Val=val;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else{
    newNode->next=head;
    head=newNode;
    }


}

void check()
{
    Node *newNode = new Node;
    newNode = head;
    while(newNode!=tail)
    {
        cout<<newNode->Val<<" ";
        newNode=newNode->next;
    }
    cout<<newNode->Val<<"\n";
}


};


int main()
{
    LinkedList L;
    L.insertElementAtFront(12);
    L.insertElementAtFront(34);
    L.insertElementAtFront(56);
    L.insertElementAtFront(89);
    L.insertElementAtFront(122);
    L.check();

}
