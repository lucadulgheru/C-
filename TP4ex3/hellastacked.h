#ifndef STACKBRUH_H_INCLUDED
#define STACKBRUH_H_INCLUDED


template<typename T>
class Stack {
    private:

        T stackArray[NMAX]; //un tableau de max NMAX elements
        int topLevel; //la tete de la pile, qui represente l’indice du dernier element du tableau stackArray: 0, 1, 2, ....



    public:

            int i;
            T newArray[NMAX];

        void push(T x) //met un element dans stack array
		 {
            if (topLevel >= NMAX - 1) //	verifie si stackArray a la dimension maximale
            {
                cout<<"The stack is full: we have already NMAX elements!\n";
                //on sort de la fonction sans rien faire
                return;
            }

            stackArray[++topLevel] = x;
        }


      int isEmpty()
        {
            //retourne 1, si topLevel>=0, donc la pile a des elements
            // sinon, retourne 0
            return (topLevel < 0);
        }

     T pop() // extrait un element du stackArray et renvoie la nouvelle tete
     {
       if (isEmpty())
        {
            // on fait l’extraction seulement si la pile n’est pas vide
            cout<<"The stack is empty! \n";
            T x;
            return x;
        }
        return stackArray[topLevel--]; 	// topLevel decroit et on change le nouveau “top”
	//difference return stackArray[--topLevel] ?
    }

    T peek()
    {
    // retourne la tete de la pile
	    if (isEmpty())
        {
            // on fait l’extraction seulement si la pile n’est pas vide
            cout<<"The stack is empty! \n";
            T x;
            return x;
        }
        return stackArray[topLevel];
}

    Stack()
    { // constructeur
        topLevel = -1; //la pile est vide au debut
    }

    ~Stack() {} // destructeur



void affichage(){

        int z=topLevel;

        for(i=0;i<=z;i++){
        newArray[i]=this->pop();
            cout<<newArray[i]<<" ";}



    }


};



#endif // STACKBRUH_H_INCLUDED
