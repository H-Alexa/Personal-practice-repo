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
    return;
}

void insertElementAtEnd(int Val)
{
    Node *newNode = new Node;
    newNode->Val=Val;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        }
    else{
        tail->next=newNode;
        tail=newNode;
    }
    return;
    }

    void insertAtPosition(int pos, int val) // 1 based indexing
    {
        Node* newNode = new Node;
        Node* prev = new Node;
        Node* current = new Node;
        newNode->Val = val;
        newNode->next = NULL;
        current = head;
        if(pos<1) {
            cout<<"INVALID OUTPUT (position starts from 1)\n";
        }
        else if(pos==1)
        {
            newNode->next=head;
            head = newNode;
        }
        else{
        bool fl=false;
            for(int i=1;i<pos;i++)
            {
                prev=current;
                current=current->next;
                if(current == NULL)
                {
                    if(i+1!=pos) {
                        cout<<"INVALID \n"<<"\n";
                        return;
                        }
                        else fl=true;
                    break;
                }
            }
            prev->next=newNode;
            newNode->next=current;
            if(fl) tail=newNode;
            return;
        }

    }

    void searchForElement(int val)
    {
        Node* current = head;
        while(current!=NULL)
        {
            if(current->Val == val)
            {
                cout<<"FOUND\n";
                return;
            }
            current=current->next;
        }
        cout<<"NOT FOUND\n";
        return;
    }

    void deleteVal(int val)
    {
        Node *prev, *current;
        if(head->Val==val)
        {
            current=head;
            head=head->next;
            free(current);
            return;
        }
        current=head->next;
        prev=head;
        while(current!=NULL)
        {
            if(current->Val==val)
            {
                prev->next=current->next;
                if(current->next==NULL){
                    tail=prev;
                }
                free(current);
                return;

                }
            prev=current;
            current=current->next;
        }
    cout<<"NOT FOUND\n";
    return;

    }

void check()
{
    Node *newNode = head;
//    newNode = head;
    while(newNode!=NULL)
    {
        cout<<newNode->Val<<" ";
        newNode=newNode->next;
    }
    cout<<"\n";
//    cout<<newNode->Val<<"\n";
    return;
}


};


int main()
{
    LinkedList L;
    L.insertElementAtFront(5);
    L.insertElementAtFront(4);
    L.insertElementAtFront(3);
    L.insertElementAtFront(2);
    L.insertElementAtFront(1);
    L.insertElementAtEnd(66);
    L.insertElementAtEnd(77);
    L.insertAtPosition(8,10);
    L.insertAtPosition(7,11);
    L.searchForElement(10);
    L.searchForElement(12);
    L.check();
    L.deleteVal(11);
    L.check();
    L.deleteVal(1);
    L.check();

}
