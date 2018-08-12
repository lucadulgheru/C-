#include <iostream>
using namespace std;
#define NMAX 10
#include "Stackerino.h"



    template <class T>

    class LargeStack{


    public:

    Stack<T> Smain;
    Stack<T> Saux;


    void push(T x)
		 {


           Smain.push(x);
        }




     T pop()
     {

       return Smain.pop();
    }



   void swap(int i, int j){

        int aux1, aux2, k,z;

        z=Smain.topLevel;

            for(k=z;k>=0;k--){

                if(k==i)
                    aux1=Smain.pop();
                else

                if(k==j)
                    aux2=Smain.pop();

                else

                Saux.push(Smain.pop());

                    }

        for(k=0;k<=z;k++){

            if(k==i)
                Smain.push(aux2);
           else
                if(k==j)

                Smain.push(aux1);

            else

                Smain.push(Saux.pop());}


    }

    void affichage(){


        Smain.affichage();

    }



};


int main()
{

            LargeStack<int> s1;

            s1.push(0);
            s1.push(1);
            s1.push(2);
            s1.push(3);
            s1.push(4);

            int x,y;
            cin>>x>>y;


            s1.swap(x,y);

            s1.affichage();


    return 0;
}
