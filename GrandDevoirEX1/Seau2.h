#ifndef SEAU2_H_INCLUDED
#define SEAU2_H_INCLUDED
#define NMAX 5


using namespace std;

template<typename T>
class Seau2 {

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

    Seau2()
    {
        topLevel = -1;
    }

    ~Seau2() {}


      void affichage(){

        int z=topLevel;

        for(i=0;i<=z;i++){
        newArray[i]=this->pop();
            cout<<newArray[i]<<" ";}


    }
};



#endif // SEAU2_H_INCLUDED
