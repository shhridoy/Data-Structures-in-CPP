/**
Algorithm For Insertion Operation in Array:
    Step 1: TEMP = N-1
    POS = POS - 1
    Step 2:  Repeat Step 3 While TEMP ≥ POS
    Step 3:  A [TEMP+1] = A [TEMP]
             TEMP = TEMP – 1
    Step 4:  A [POS] = X
    Step 5:  N = N + 1
**/

#include <iostream>
#include <stdio.h>
using namespace std;
#define N 5

void insert(int *a, int pos, int val)
{
    int TEMP = N-1;
    while(TEMP >= pos){
        a[TEMP+1] = a[TEMP];
        TEMP--;
    }
    a[pos] = val;
}

void traverse(int *a, int n)
{
    for(int i=0; i<n; i++){
        cout<<"Array["<<i<<"] = "<<a[i]<<endl;
    }
}

int main()
{
    int array[N] = {10, 20, 30, 40, 50};
    int POS, val;

    cout<<"Before Insertion: \n";
    traverse(array, N);

    cout<<"\nEnter Position: ";
    cin>>POS;
    cout<<"Enter Value: ";
    cin>>val;
    insert(array, POS, val);

    cout<<"\nAfter Insertion: \n";
    traverse(array, N+1);
}

/** OUTPUT:
Before Insertion:
Array[0] = 10
Array[1] = 20
Array[2] = 30
Array[3] = 40
Array[4] = 50

Enter Position: 4
Enter Value: 88

After Insertion:
Array[0] = 10
Array[1] = 20
Array[2] = 30
Array[3] = 40
Array[4] = 88
Array[5] = 50
**/
