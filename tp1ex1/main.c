#include <stdio.h>
#include <stdlib.h>


int nombrePremiers(int n){

int j,c=0;

        for(j=1;j<=n/2;j++){
           if(n%j==0)
                c++;
        }


        if(c==1)
           return 1;
        else return 0;

}



int main()
{

    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    if(nombrePremiers(i)==1)
       printf("%d\n",i);

    return 0;
}
