/**Queues are data structures that, like the stack, have restrictions on where you can add and remove elements.
To understand a queue, think of a cafeteria line: the person at the front is served first,
and people are added to the line at the back. Thus, the first person in line is served first,
and the last person is served last. This can be abbreviated to First In, First Out (FIFO).
**/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"Current queue size: "<<q.size()<<endl;
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Back Element: "<<q.back()<<endl;
    q.pop();
    cout<<"\nQueue size after pop: "<<q.size()<<endl;
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Back Element: "<<q.back()<<endl;

    return 0;
}

/** OUTPUT:
Current queue size: 4
Front element: 10
Back Element: 40

Queue size after pop: 3
Front element: 20
Back Element: 40
**/
