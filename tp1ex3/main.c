#include <stdio.h>
#include <stdlib.h>


int relPremiers(int n, int m){

int x;

while(m){

x=n%m;
n=m;
m=x;
}

if(n==1)

return 1;
else return 0;

}





int main()
{

    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    printf("%d",relPremiers(n,m));
    return 0;
}
