#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* Head = NULL;
void create(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;

    if(Head == NULL){
        Head = nptr;
    }
    else{
        node* tptr = Head;
        tptr->next = nptr;
        tptr = nptr;
    }
}

void print()
{
    cout<< "Current Linked List: ";
    node* tptr = Head;
    while(tptr != NULL){
        cout<< tptr->data << "-> ";
        tptr = tptr->next;
    }
    cout<<endl;
}

int main()
{
    create(6);
    print();
    create(7);
    print();
    return 0;
}

/* OUTPUT:
 Current Linked List: 6->
 Current Linked List: 6-> 7-> 
 */
