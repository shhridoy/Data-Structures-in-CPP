/** Heap operation in STL:
make_heap() :- This function is used to convert a range in a container to a heap.
front() :- This function displays the first element of heap which is the maximum number.
push_heap() :- This function is used to insert elements into heap.
The size of the heap is increased by 1. New element is placed appropriately in the heap.
pop_heap() :- This function is used to delete the maximum element of the heap.
The size of heap is decreased by 1. The heap elements are reorganised accordingly after this operation.
**/
#include <iostream>
#include <vector> /// for vector operations
#include <algorithm> /// for heap operations
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2); //using push_back() to enter element in vector
    v.push_back(7);
    v.push_back(5);
    v.push_back(8);

    cout<<"Elements of the vector: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\nThe vector size is: "<<v.size()<<endl;
    cout<<"Front element: "<<v.front()<<endl;
    cout<<"Rear element: "<<v.back()<<endl;

    make_heap(v.begin(), v.end()); // Converting vector into a heap using make_heap()

    cout<<"\nAfter making heap: "<<endl;
    cout<<"Elements of the heap: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\nThe Heap size is: "<<v.size()<<endl;
    cout<<"Maximum / Front element: "<<v.front()<<endl;
    cout<<"Minimum / Rear element: "<<v.back()<<endl;

    v.push_back(1);
    cout<<"\nAfter push elements: "<<endl;
    push_heap(v.begin(), v.end()); // using push_heap() to reorder elements

    cout<<"Elements of the heap: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\nThe Heap size is: "<<v.size()<<endl;
    cout<<"Maximum / Front element: "<<v.front()<<endl;
    cout<<"Minimum / Rear element: "<<v.back()<<endl;

    v.pop_back();
    cout<<"\nAfter pop elements: "<<endl;
    pop_heap(v.begin(), v.end()); // using pop_heap() to delete maximum element

    cout<<"Elements of the heap: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\nThe Heap size is: "<<v.size()<<endl;
    cout<<"Maximum / Front element: "<<v.front()<<endl;
    cout<<"Minimum / Rear element: "<<v.back()<<endl;

    sort_heap(v.begin(), v.end());
    cout<<"\nElements of the heap After sorting: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}

/* OUTPUT:
Elements of the vector: 2 7 5 8
The vector size is: 4
Front element: 2
Rear element: 8

After making heap:
Elements of the heap: 8 7 5 2
The Heap size is: 4
Maximum / Front element: 8
Minimum / Rear element: 2

After push elements:
Elements of the heap: 8 7 5 2 1
The Heap size is: 5
Maximum / Front element: 8
Minimum / Rear element: 1

After pop elements:
Elements of the heap: 7 2 5 8
The Heap size is: 4
Maximum / Front element: 7
Minimum / Rear element: 8

Elements of the heap After sorting: 2 5 8 7
*/
