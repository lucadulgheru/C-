#include <iostream>
#include "Stackerino.h"
using namespace std;

int main()
{

        int i,l1,l2,c1,c2,aux,b,aux2;
        int currentlvl,savemeplz;
        c1=7;
        c2=4;

        Stack<int> baril;
        Stack<int> seau1;
        Stack<int> seau2;




        for(i=0;i<=19;i++)
            baril.push(1);



         cout<<"Capacite du premier seau: C1= "<<c1+1<<" litres"<<endl;
         cout<<"Capacite du second seau: C2= "<<c2+1<<" litres"<<endl;
         cout<<"Capacite du baril: Bmax= 20 litres"<<endl;

     int k=1;








        while(seau1.topLevel!=3){

 if(seau1.isEmpty() && seau2.isEmpty()){    // CONDITION I  ---- AMBELE EMPTY
                    for(i=0;i<=c1;i++){
                        seau1.push(baril.pop());
                        }

                           l1=seau1.topLevel;
                l2=seau2.topLevel;
                b=baril.topLevel;

               cout<<"Etat nr: "<<k<<endl;

            cout<<"L1= "<<l1+1<<endl;
            cout<<"L2= "<<l2+1<<endl;
            cout<<"B= "<<b+1<<endl;

                k++;




                        }




                else


                if(seau1.topLevel==c1 && seau2.isEmpty()){ // CONDTIION II ----- PRIMA FULL - A DOUA EMPTY
                    for(i=0;i<=c2;i++){
                        seau2.push(seau1.pop());
                        }

                           l1=seau1.topLevel;
                l2=seau2.topLevel;
                b=baril.topLevel;

               cout<<"Etat nr: "<<k<<endl;

            cout<<"L1= "<<l1+1<<endl;
            cout<<"L2= "<<l2+1<<endl;
            cout<<"B= "<<b+1<<endl;

                k++;


                                            }

else

        if(!seau1.isEmpty() && seau1.topLevel<c1 && seau2.topLevel==c2){ // CONDITION III - PRIMA PARTIAL - A DOUA FULL
                    for(i=0;i<=c2;i++){
                        baril.push(seau2.pop());
                        }

                           l1=seau1.topLevel;
                l2=seau2.topLevel;
                b=baril.topLevel;

               cout<<"Etat nr: "<<k<<endl;

            cout<<"L1= "<<l1+1<<endl;
            cout<<"L2= "<<l2+1<<endl;
            cout<<"B= "<<b+1<<endl;

                k++;



                                            }

else




if(!seau1.isEmpty() && seau1.topLevel<c1 && seau2.isEmpty()){ // CONDITION IV - PRIMA PARTIAL, A DOUA EMPTY


            if(seau1.topLevel<=c2){
                    aux=seau1.topLevel;
                    for(i=0;i<=aux;i++){
                        seau2.push(seau1.pop());
                        }}

            else if(seau1.topLevel>c2){

                    for(i=0;i<=c2;i++){
                        seau2.push(seau1.pop());
                    }

            }

                           l1=seau1.topLevel;
                l2=seau2.topLevel;
                b=baril.topLevel;

               cout<<"Etat nr: "<<k<<endl;

            cout<<"L1= "<<l1+1<<endl;
            cout<<"L2= "<<l2+1<<endl;
            cout<<"B= "<<b+1<<endl;

                k++;



                        }



else


            if(seau1.topLevel==c1 && !seau2.isEmpty() && seau2.topLevel<c2){ // CONDITION V - PRIMA FULL - A DOUA PARTIAL


                        savemeplz=c2-seau2.topLevel;

                        for(i=1;i<=savemeplz;i++){
                            seau2.push(seau1.pop());


                        }

                           l1=seau1.topLevel;
                l2=seau2.topLevel;
                b=baril.topLevel;

               cout<<"Etat nr: "<<k<<endl;

            cout<<"L1= "<<l1+1<<endl;
            cout<<"L2= "<<l2+1<<endl;
            cout<<"B= "<<b+1<<endl;

                k++;




                        }


else

if(seau1.isEmpty() && !seau2.isEmpty() && seau2.topLevel<c2){  // CONDITION VI - PRIMA EMPTY - A DOUA PARTIAL
                    for(i=0;i<=c1;i++){
                        seau1.push(baril.pop());
                        }

                           l1=seau1.topLevel;
                l2=seau2.topLevel;
                b=baril.topLevel;

               cout<<"Etat nr: "<<k<<endl;

            cout<<"L1= "<<l1+1<<endl;
            cout<<"L2= "<<l2+1<<endl;
            cout<<"B= "<<b+1<<endl;

                k++;



                        }


        }

        cout<<"On a obtenu 4 litres apres "<<k-1<<" etapes!";

    return 0;

   }

