#include <iostream>
#include "queue1.h"
using namespace std;

int main()
{

    Queue<int> q1;
    q1.enqueue(0);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.dequeue();

    cout<<q1.getHead()<<endl;
    cout<<q1.getTail();


    return 0;
}
