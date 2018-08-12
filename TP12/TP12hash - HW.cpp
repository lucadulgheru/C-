#include <iostream>
#include "hash.h"
#include <string>
#include <cstdlib>
using namespace std;



int myfunction(int key){


    return key%10;


}

int myfunction2(string mykey){

    int hkey;

   for (int i = 0; i < mykey.length(); i++)
     hkey = (hkey * 2 + mykey[i]) % 10;

        return hkey;

}

int hfunction(int cnp){

        int i,mykey=0,z;

z=cnp;

    mykey=mykey+z%10;

    z=z/10000;

    mykey=mykey+z%10;

    return mykey%10;



}

int returnRandomCNP(){


    return (rand() % 99999 + 10000);


}


int main(){


    Hashtable<int,string> myhtable(10,hfunction);



        int i=0;

        string names[10]={"John","Nate","Angus","Jerry","Tom"};

        while(i<5){


            myhtable.put(returnRandomCNP(),names[i]);

            i++;


        }


        for(i=1;i<=10;i++) {

            if(myhtable.hasKey(i))
           cout<<myhtable.get(i)<<" ";

        }




}
