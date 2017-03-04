/**Stack is an ordered list of similar data type.
Stack is a LIFO structure. (Last in First out).
push() function is used to insert new elements into the Stack and
pop() is used to delete an element from the stack.
Both insertion and deletion are allowed at only one end of Stack called Top.**/

#include <iostream>
using namespace std;

int *arr;
int size;
int top = -1;

void push(int value){
    if(top < size-1){
        top++;
        arr[top] = value;
    }
    else{
        cout<<"Can't push, stack is full."<<endl;
    }
}

void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"Can't pop, the stack is empty"<<endl;
    }
}
void print(){
    cout<<"Current Stack: "<<" ";
    for(int i=0; i<=top; i++){
        cout<<"| "<< arr[i] << " | ";
    }
    cout<<endl;
}

int main()
{
    cout<<"Enter the stack size: ";
    cin>>size;
    arr = new int[size];

    cout<<"PUSHED:"<<endl;
    push(9);
    push(7);
    push(5);
    print();
    push(3);
    print();

    cout<<"POPED:"<<endl;
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();

    return 0;
}

/** OUTPUT:
Enter the stack size: 3
PUSHED:
Current Stack:  | 9 | | 7 | | 5 |
Can't push, stack is full.
Current Stack:  | 9 | | 7 | | 5 |
POPED:
Current Stack:  | 9 | | 7 |
Current Stack:  | 9 |
Current Stack:
Can't pop, the stack is empty
Current Stack:
**/
