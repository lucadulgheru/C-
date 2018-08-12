#include <iostream>
using namespace std;



    template <typename T>
    void echange(T &a, T &b){

        T aux;

        aux=a;
        a=b;
        b=aux;


    }





    template <typename T>
    T triage(T x){

        bool ok=false;
        int n=5;
            while(!ok){
                ok=true;
        for(int i=0;i<n-1;i++)
            {
                if(x[i]>x[i+1]){
                    echange(x[i],x[i+1]);
                    ok=false;
            }

    }


            n--;
    }

    }

int main()
{

        int a[5],i,n;
        n=5;
        for(i=0;i<n;i++)
            cin>>a[i];


                triage(a);


for(i=0;i<n;i++)
            cout<<a[i]<<" ";


    return 0;
}
