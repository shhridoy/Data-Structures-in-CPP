/**Stack is an ordered list of similar data type.
Stack is a LIFO structure. (Last in First out).
push() function is used to insert new elements into the Stack and
pop() is used to delete an element from the stack.
Both insertion and deletion are allowed at only one end of Stack called Top.**/

#include <iostream>
using namespace std;

int top = -1; //to detect index [0];
int arr[6];

void push(int value){
    top++; //increment top from -1
    arr[top] = value;
}

void pop(){
    top--;
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
    push(10);
    push(8);
    push(6);
    push(4);
    push(2);
    print();

    cout<<"After pop: "<<endl;
    pop();
    print();
    pop();
    print();

    return 0;
}

/** OUTPUT:
Current Stack:  | 10 | 8 | 6 | 4 | 2 |
After pop:
Current Stack:  | 10 | 8 | 6 | 4 |
Current Stack:  | 10 | 8 | 6 |
**/
