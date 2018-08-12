#include <iostream>

using namespace std;


    void swap(int *a, int n){
      int  i,x,z;
        z=n;
       for(i=0;i<n/2;i++){
            x=*(a+i);
            *(a+i)=*(a+z-1);
            *(a+z-1)=x;
            z--;

    }

    for(i=0;i<n;i++)
        cout<<*a++<<" ";


    }

int main()
{


    int n,x[10],i,m;
    int *p=&x[0];
    //int *o=&n;

    cin>>n;
    m=n;
    for(i=0;i<n;i++){
        cin>>*p;
           // *p=*o;

        *p++;
    }

    p=&x[0];

    swap(p,n);

    /*for(i=0;i<m;i++){
        cout<<x[i]<<" ";
    }*/




    return 0;
}
