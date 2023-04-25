#include<bits/stdc++.h>
using namespace std;

class simpleLinkedList{
public:
    int data;
    simpleLinkedList *next;
};

class doubleLinkedList{
public:
    int data;
    doubleLinkedList *next;
    doubleLinkedList *prev;
};
simpleLinkedList *LL, *head,*tail;

void init();
void insertAtHead(int data);
void insertAtTail(int data);
void insertAtPosition(int data,int pos);
void insertAfter(int data,int pos);

void deletePos(int pos);
void deleteData(int data);
void deleteHead();
void deleteTail();

void reverseLL();

void print();

void searchLL(int data);


int main()
{
    init();
    insertAtHead(5);
    insertAtHead(1);
    insertAtTail(9);
    insertAfter(6,3);
    print();


}


void init()
{
    head=tail=NULL;
}
void insertAtHead(int data)
{
    if(head==NULL)
    {
        head = new simpleLinkedList;
        head->data = data;
        head->next=NULL;
        tail=head;
    }
    else
    {
        simpleLinkedList *node = new simpleLinkedList;
        node->data=data;
        node->next = head;
        head = node;
    }
}

void insertAtTail(int data)
{
    simpleLinkedList *node = new simpleLinkedList;
    node->data = data;
    node->next = NULL;

    if(head==NULL)
        head = node;
    else{
        tail->next = new simpleLinkedList;
        tail->next = node;
        tail = node;
    }
}

void insertAfter(int data, int pos) //insert an element after a position
{
    if(head==NULL) return;
    simpleLinkedList *node= new simpleLinkedList;
    simpleLinkedList *temp= new simpleLinkedList;
    simpleLinkedList *prev= new simpleLinkedList;
    node=head;
    while(pos--)
    {
        if(node==NULL) return;
        prev=node;
        node=node->next;
    }
    temp->data=data;
    temp->next=node;
    prev->next = temp;
    if(prev==tail) tail=temp;
    return;



}

void insertAtPosition(int data, int pos)
{
    simpleLinkedList *node=new simpleLinkedList;
    simpleLinkedList *temp=new simpleLinkedList;
    node->data=data;
    node->next=NULL;
    temp=head;
    while(pos--)
    {
        if(temp==NULL) return;
        temp=temp->next;
    }


}


void print()
{
    simpleLinkedList *node;
    if(head==NULL) return;
    node=head;
//    while(node!=NULL)
    while(1)
    {
        cout<<node->data<<" ";
        if(node==tail) return;
        node=node->next;
    }
    return;
}
