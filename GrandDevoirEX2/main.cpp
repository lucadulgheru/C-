#include <iostream>
#include "issaqueue.h"
#include <cstring>

using namespace std;

class House{

    int number;
    char color;

    public:

    House(){}

    House(int x, char y){

        this->number=x;
        this->color=y;

    }

    int getNumber(){

        return number;

    }

   char getColor(){

        return color;
    }

};



int testPrim(int x)
{
    int d, ok=1;
        if (x==1) return 0;
            else
    {
            for(d=2; d<=x/2; d++)
                if(x % d == 0) ok=0;

            if(ok==1)
                return 1;
                    else return 0;
 }

}


int main()
{


        Queue<int> q;   // Neighbourhood
        Queue<int> auxq; // Temporary queue?

        int i,n,t;

        for(i=1;i<=6;i++){
            q.enqueue(i);
        }                   // Neighbourhood consists of 10 houses

            cout<<"Select your house: ";
            cin>>n;
            cout<<endl;


            t=q.getSize();

            if(testPrim(n)==1){

                for(i=1;i<=t;i++){

                    if(testPrim(q.peek())==0){

                        cout<<"House number "<<q.peek()<<" has been robbed by Robin!"<<endl;
                        cout<<endl;
                        q.dequeue();

                    }



                    else {



                        cout<<"House number "<<q.peek()<<" has been skipped!"<<endl;
                        cout<<endl;
                        auxq.enqueue(q.dequeue());


                    }

        }



            }

            else {



                    for(i=1;i<=t;i++){

                    if(testPrim(q.peek())==1){

                        cout<<"House number "<<q.peek()<<" has been robbed by Robin!"<<endl;
                        cout<<endl;
                        q.dequeue();

                    }



                    else {



                        cout<<"House number "<<q.peek()<<" has been skipped!"<<endl;
                        cout<<endl;
                        auxq.enqueue(q.dequeue());


                    }


            }

        }







        int al=auxq.getSize();

        for(i=1;i<=al;i++)
            q.enqueue(auxq.dequeue());


           int p=1;
           int s=0;
           int var,max;
           max=0;
           int lost=1;
           int counter=0;
           int safe;

            restart:

                 while(q.getSize()!=0)   {

                       var=q.peek();
                        q.dequeue();



                        for(i=1;i<=(t/2)-1;i++){

                        p=p*var*q.peek();

                        if(p%n==0) s=s+1;

                        else s=s+0;

                        auxq.enqueue(q.dequeue());

                        p=1;

                                ; }


                 }


                if(s==2) {cout<<"House number "<<var<<" has been skipped!"<<endl;
                            cout<<endl;
                            safe=var;

                            }

               if (s==1) {cout<<"House number "<<var<<" has been robbed by Robin!"<<endl;
                            cout<<endl;}


                if(n==1)

                    s=-1;
                    else
               s=0;
               counter=counter+1;


        for(i=1;i<=t/2-1;i++)

            q.enqueue(auxq.dequeue());
                q.enqueue(var);

       while(counter<t/2) goto restart;


        cout<<"The only house remaining is "<<safe;



    return 0;
}
