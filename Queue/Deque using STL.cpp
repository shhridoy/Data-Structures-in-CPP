/**Deque is a shorthand for doubly ended queue.
Deque allows fast insertion and deletion at both ends of the queue.
Although we can also use vector container for the insertion and deletion at both of its ends,
but insertion and deletion at the front of the array is costlier than at the back,
in case of deque but deque are more complex internally.
**/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(1);
    dq.push_back(4);
    cout<<"Current dequeue size: "<<dq.size()<<endl;
    cout<<"Front element: "<<dq.front()<<endl;
    cout<<"Back element: "<<dq.back()<<endl;
    dq.pop_front();
    cout<<"\nAfter pop from front dequeue size: "<<dq.size()<<endl;
    cout<<"Front element: "<<dq.front()<<endl;
    cout<<"Back element: "<<dq.back()<<endl;
    dq.pop_back();
    cout<<"\nAfter pop from back dequeue size: "<<dq.size()<<endl;
    cout<<"Front element: "<<dq.front()<<endl;
    cout<<"Back element: "<<dq.back()<<endl;

    return 0;
}

/** OUTPUT:
Current dequeue size: 4
Front element: 1
Back element: 4

After pop from front dequeue size: 3
Front element: 2
Back element: 4

After pop from back dequeue size: 2
Front element: 2
Back element: 3
**/
