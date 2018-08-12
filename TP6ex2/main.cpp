#include <iostream>

using namespace std;

int main()
{



    int x[6],i;
    int *p=&x[5];


    for(i=0;i<6;i++){
        cin>>*p;
        *p--;
    }




    for(i=0;i<=5;i++)
        cout<<x[i]<<" ";


    return 0;
}
