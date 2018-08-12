#include <iostream>
#include "Stackerino.h"
#define NMAX 10
using namespace std;

    template<class T>

    class StackedQueue{

        public:

        int n,i,m;
        T x;

        Stack<T> s1;
        Stack<T> s2;


        StackedQueue(){}


        void enqueue(T x){

            s1.push(x);


        }


        T dequeue(){

               n=s1.topLevel;

                for(i=0;i<n;i++){
                    s2.push(s1.pop());}

              x=s1.pop();



                m=s2.topLevel;

              for(i=0;i<=m;i++){
                    s1.push(s2.pop());}

                    return x;


        }



          int isEmpty(){

        return s1.isEmpty();

    }


    };



int main()
{


        StackedQueue<int> sq;

        sq.enqueue(0);
        sq.enqueue(1);
        sq.enqueue(2);
        sq.enqueue(3);

        cout<<sq.dequeue()<<endl;
        cout<<sq.dequeue();


    return 0;
}
