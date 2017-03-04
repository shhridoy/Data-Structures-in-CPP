/**Queues are data structures that, like the stack, have restrictions on where you can add and remove elements.
To understand a queue, think of a cafeteria line: the person at the front is served first,
and people are added to the line at the back. Thus, the first person in line is served first,
and the last person is served last. This can be abbreviated to First In, First Out (FIFO).
**/

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

    return 0;
}

/** OUTPUT:
5 added

Element in current queue: 5
3 added

Element in current queue: 5 3
2 added

Element in current queue: 5 3 2
**/
