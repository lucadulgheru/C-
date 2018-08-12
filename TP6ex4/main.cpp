#include <iostream>

using namespace std;


char *getDep(char *p){

int i,k=0;
        while(*(p+k)!=','){
            k++;}

    cout<<"Le departement est: ";

       for(i=k;i<11;i++){
        if(isupper(*(p+i)))
            cout<<*(p+i);}



}


int main()
{
    int i;
    char a[15]="Slatina, OT"; //11
    char *ps;
    ps=&a[0];

    getDep(ps);



    return 0;
}
