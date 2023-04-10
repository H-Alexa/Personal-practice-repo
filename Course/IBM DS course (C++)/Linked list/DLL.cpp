#include<iostream>

using namespace std;

class Node
{
public:
    int Val;
    Node *prev;
    Node *next;
};

class DLL
{
public:
    Node *head, *tail;
    DLL()
    {
        head=NULL;
        tail=NULL;
    }
    void insertAtFront(int val)
    {
        Node *newNode = new Node;
        newNode->Val=val;
        newNode->prev=NULL;
        newNode->next=NULL;
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;

        }

    }


    void insertAtEnd(int val)
    {
        Node *newNode = new Node;
        newNode->Val=val;
        newNode->prev=NULL;
        newNode->next=NULL;
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;

        }
        return;

    }

    void insertAtPosition(int pos, int val){
    Node *previous, *current, *newNode;
    newNode = new Node;
    newNode->Val=val;
    newNode->prev=NULL;
    newNode->next=NULL;
    if(pos<1)
    {
        cout<<"Invalid request. Position must start from 1\n";
    }
    else if(pos==1)
    {
        newNode->next=head;
        head->prev=newNode;
        head=newNode;

    }
    else{
        current = head->next;
        previous=head;
        for(int i=1;i<pos;i++)
        {
            if(current==NULL)
            {
                if(i+1==pos)
                {
                    previous->next=newNode;
                    newNode->prev=previous;
                    tail=newNode;
                    return;
                }
                else{
                    cout<<"Invalid request\n";
                    return;
                }
            }
            previous=current;
            current=current->next;
        }

        previous->next=newNode;
        newNode->prev=previous;

        current->prev=newNode;
        newNode->next=current;

    }
    return;

    }

    void deleteElement(int val)
    {
        Node *newNode, *previous, *current;
        newNode=head;
        while(newNode!=NULL)
        {
            if(newNode->Val==val)
            {
                previous=newNode->prev;
                if(previous!=NULL)
                {
                previous->next=newNode->next;
                }
                else{
                    head=head->next;
                }
                current=newNode->next;
                if(current!=NULL){
                current->prev=previous;
                }
                else{
                tail=tail->prev;
                }
                free(newNode);
            }
            newNode=newNode->next;
        }
        return;
    }




    void displayOrder()
    {
        Node *current;
        current=head;
        while(current!=NULL)
        {
            cout<<current->Val<<" ";
            current=current->next;
        }
        cout<<"\n";
        return;
    }
    void displayReverseOrder()
    {
        Node *current;
        current=tail;
        while(current!=NULL)
        {
            cout<<current->Val<<" ";
            current=current->prev;
        }
        cout<<"\n";
        return;
    }

};

int main()
{
    DLL L;
    L.insertAtFront(1);
    L.insertAtFront(2);
    L.insertAtFront(3);
    L.insertAtEnd(0);
    L.insertAtPosition(1,4);
    L.insertAtPosition(6,-1);
    L.displayOrder();
    L.displayReverseOrder();
    L.deleteElement(-1);
    L.displayOrder();
    L.displayReverseOrder();
    L.deleteElement(2);
    L.displayOrder();
    L.displayReverseOrder();

    return 0;
}

