
#include <iostream>
using namespace std;

const int size = 5;
int q[size], front = 0, rear=0;

void enque(int value){
    if(rear == size){
        cout<<"Queue is full."<<endl;
    }
    else{
        cout<<value<<" added"<<endl;
        q[rear] = value;
    }
    rear++;
}

void dequeue(int value){
    if(front == rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        front = front+1;
        cout<<"\n"<<value<<" removed form queue."<<endl;
    }
}

void show(){
    int temp;
    temp = front;
    if(front == rear){
        cout<<"The queue is empty"<<endl;
    }
    else{
        cout<<"\nElement in current queue: ";
        for(int i=temp; i<rear; i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    enque(5);
    show();
    enque(3);
    show();
    enque(2);
    show();

    dequeue(5);
    show();
    dequeue(3);
    show();
    dequeue(2);
    show();

    return 0;
}

/** OUTPUT:
5 added

Element in current queue: 5
3 added

Element in current queue: 5 3
2 added

Element in current queue: 5 3 2

5 removed form queue.

Element in current queue: 3 2

3 removed form queue.

Element in current queue: 2

2 removed form queue.
The queue is empty
**/
