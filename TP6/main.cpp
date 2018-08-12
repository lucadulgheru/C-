#include <iostream>

using namespace std;


int main ()

{

    int x[6],i,n;
    int *p=&x[0];
    //int *o=&n;


    for(i=0;i<=5;i++){
        cin>>*p;
           // *p=*o;

        *p++;
    }


    for(i=0;i<=5;i++)
        cout<<x[i]<<" ";



return 0;

}
