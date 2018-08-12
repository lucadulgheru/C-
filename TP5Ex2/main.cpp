#include <iostream>
#include "queue2.h"
#include "stack.h"
#define NMAX 10

using namespace std;

template<class T>

class QueuedStack{

public:

    int n,i,m;
    T x;

    Queue<T> q1;
    Queue<T> q2;

    QueuedStack(){}

    void push(T x){

        q1.enqueue(x);

    }

    T pop(){

      n=q1.getSize();

        for(i=0;i<n-1;i++){
            q2.enqueue(q1.dequeue());
        }

         x=q1.dequeue();

    m=q2.getSize();

        for(i=0;i<=m-1;i++)

            q1.enqueue(q2.dequeue());

    return x;

    }


    int isEmpty(){

        return q1.isEmpty();

    }

};


int main()
{

        QueuedStack<int> qs;


        qs.push(1);
        qs.push(2);
        qs.push(3);

        cout<<qs.pop()<<endl;
        cout<<qs.pop();

    return 0;
}
