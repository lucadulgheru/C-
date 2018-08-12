#include <iostream>
using namespace std;
#define NMAX 10 // pre-processing directive
#include "stackbruh.h"

using namespace std;

int main()
{

        int n,i;
        double p;
    cout<<"n= ";
    cin>>n;

    Stack<double> myStack;

        for(i=0;i<n;i++){
            cin>>p;
                myStack.push(p);
        }


myStack.affichage();

    return 0;
}
