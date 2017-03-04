/** Priority Queues
A priority queue is just like a normal queue data structure except that each element inserted
is associated with a ”priority”. It supports the usual push(), pop(), top() etc operations,
but is specifically designed so that its first element is always the
greatest of the elements it contains, according to some strict weak ordering condition.
**/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(3);
    pq.push(5);
    pq.push(1);
    pq.push(8);
    while ( !pq.empty() ){
        cout << pq.top() << endl;
        pq.pop();
    }
    cin.get();
}

/** OUTPUT:
8
5
3
1
**/
