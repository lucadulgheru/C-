#include <stdio.h>
#include <stdlib.h>


int factoriel(n){

int f=1;

if(n==0)
return 0;

else if(n!=0){

while(n){
f=f*n;
n=n-1;}

}

return f;


}


int main()
{

    int n;
    scanf("%d",&n);
    printf("%d",factoriel(n));
    return 0;
}
