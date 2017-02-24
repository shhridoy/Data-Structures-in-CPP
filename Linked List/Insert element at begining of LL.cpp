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

int main()
{
    addFirst(0);
    print();
    addFirst(5);
    print();
    addFirst(6);
    print();

    return 0;
}

/** OUTPUT:
Current Linked List: 0<-
Current Linked List: 5<- 0<-
Current Linked List: 6<- 5<- 0<-
**/
