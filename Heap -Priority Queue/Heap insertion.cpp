#include <iostream>
using namespace std;

const int size = 5; ///size of array
int arr[size];
int count;
void Adjust_from_Bottom();

void Insert(int value){
    if(count < size-1){
        count++;
        arr[count] = value;
        Adjust_from_Bottom();
    }
    else{
        cout<<"Heap is full"<<endl;
    }
}

void Adjust_from_Bottom(){
    int item = arr[count]; /// rear element of array
    int i = count; ///rear index number
    while(i/2 >= 1){
        if(arr[i/2] < item){
            arr[i] = arr[i/2];
            i = i/2;
        }
        else{
            break;
        }
        arr[i] = item;
    } /// end of while loop
}

void print(){
    cout<<"Heap (max-priority): ";
    for(int i=1; i<=count; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Insert(50);
    Insert(30);
    Insert(1000);
    Insert(500);
    Insert(550);

    print();

    return 0;
}


/* OUTPUT:
Heap is full
Heap (max-priority): 1000 500 50 30
*/
