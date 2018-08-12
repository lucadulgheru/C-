#include <iostream>
#include "hash.h"
#include <string>
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



int main(){


    Hashtable<string,char> myhtable(10,myfunction2);
    myhtable.put("HelloWorld",'A');
    myhtable.put("HashTable",'B');
    myhtable.put("T",'C');
    myhtable.put("TestLaAnaliza",'D');



   cout<<myhtable.hasKey("T");





}
