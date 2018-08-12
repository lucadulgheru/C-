#ifndef SEAU1_H_INCLUDED
#define SEAU1_H_INCLUDED
#define NMAX 8


using namespace std;

template<typename T>
class Seau1 {

    public:

        T stackArray[NMAX];
        int topLevel;
        int i;
        T newArray[NMAX];

        void push(T x)
		 {
            if (topLevel >= NMAX - 1)
            {
                cout<<"The stack is full: we have already NMAX elements!\n";

                return;
            }

            stackArray[++topLevel] = x;
        }


      int isEmpty()
        {

            return (topLevel < 0);
        }

     T pop()
     {
       if (isEmpty())
        {

            cout<<"The stack is empty! \n";
            T x;
            return x;
        }
        return stackArray[topLevel--];
    }

    T peek()
    {

	    if (isEmpty())
        {

            cout<<"The stack is empty! \n";
            T x;
            return x;
        }
        return stackArray[topLevel];
}

    Seau1()
    {
        topLevel = -1;
    }

    ~Seau1() {}


      void affichage(){

        int z=topLevel;

        for(i=0;i<=z;i++){
        newArray[i]=this->pop();
            cout<<newArray[i]<<" ";}


    }
};




#endif // SEAU1_H_INCLUDED
