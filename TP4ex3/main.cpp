#include <iostream>
using namespace std;
#define NMAX 10 // pre-processing directive
#include "hellastacked.h"
#include <string.h>


using namespace std;

int main()
{
    int i,n,ok=1;
    Stack <char> myStack;
    string s;
    cin>>s;
    char suite[10];

for(i=0;i<s.length();i++){

    suite[i]=s[i];
    myStack.push(suite[i]);
    cout<<suite[i]<<" ";

}
        cout<<endl;




    i=0;
        while(i<s.length()){

        if(suite[i]==myStack.pop())

                i++;

                    else {ok=0;
                    break;}

        }
        if(ok==0)
        cout<<"no";
        else cout<<"yes";

    return 0;
}
