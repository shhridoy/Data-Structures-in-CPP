/**Stack is an ordered list of similar data type.
Stack is a LIFO structure. (Last in First out).
push() function is used to insert new elements into the Stack and
pop() is used to delete an element from the stack.
Both insertion and deletion are allowed at only one end of Stack called Top.**/

#include <iostream>
using namespace std;

int *arr = new int[1];
int size = 1;
int top = -1;

void resize(){
    cout<<"Old Stack "<<size<<endl;
    int *newarr = new int [size*2];
    for(int i=0; i<=top; i++){
        newarr[i] = arr[i];
    }
    size = size*2;
    cout<<"After resizing the stack is "<<size<<endl;
    delete[] arr;
    arr = newarr;
}

void push(int value){
    if(top < size-1){
        top++;
        arr[top] = value;
    }
    else{
        cout<<"Stack is full, resizing........."<<endl;
        resize();
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
    cout<<"Current Stack: "<<"";
    for(int i=0; i<=top; i++){
        cout<<"| "<< arr[i] << " | ";
    }
    cout<<endl;
}

int main()
{
    push(9);
    push(7);
    push(5);
    print();
    push(3);
    print();

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
Stack is full, resizing.........
Old Stack 1
After resizing the stack is 2
Current Stack: | 9 | | 5 |
Stack is full, resizing.........
Old Stack 2
After resizing the stack is 4
Current Stack: | 9 | | 5 |
Current Stack: | 9 |
Current Stack:
Can't pop, the stack is empty
Current Stack:
Can't pop, the stack is empty
Current Stack:
**/
