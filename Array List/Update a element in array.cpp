#include <iostream>
using namespace std;

int main()
{
    int LA[] = {1, 3, 5, 7};
    int k=3, n=5, item=10, i, j;

    cout<<"the original array elements are: ";
    for(i=0; i<n; i++){
        cout<<"LA["<<i<<"] = "<<LA[i]<<" ";
    }

    LA[k-1] = item;
    cout<<"\nThe array elements after updation: ";
    for(i=0; i<n; i++){
        cout<<"LA["<<i<<"] = "<<LA[i]<<" ";
    }
    return 0;
}
