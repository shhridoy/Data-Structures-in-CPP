#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* Head = NULL;
void addFirst(int value){
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;

    if(Head==NULL){
        Head = nptr;
    }
    else{
        nptr->next = Head;
        Head = nptr;
    }
}

void print(){
    cout<< "Current Linked List: ";
    node* tptr = Head;
    while(tptr != NULL){
        cout<< tptr->data << "<- ";
        tptr = tptr->next;
    }
    cout<<endl;
}

void removeLast(){
    if(Head == NULL){
        cout<< "List is empty" <<endl;
    }
    else if(Head->next == NULL){
        Head = NULL;
    }
    else{
        node* tptr= Head;
        while(tptr->next->next != NULL){
            tptr = tptr->next;
        }
        tptr->next = NULL;
    }
}

int main()
{
    addFirst(0);
    print();
    addFirst(5);
    print();
    addFirst(6);
    print();

    removeLast();
    print();
    removeLast();
    print();
    removeLast();
    print();
    removeLast();
    print();

    return 0;
}
