#include <iostream>
#include <cstring>
using namespace std;


class BankAccount{


    //private:

        string nom;
        string addresse;
        string IBAN;
        double somme;

    public:

        BankAccount(){}

        BankAccount(string name, string address, string IBANc, double sum){

                this->nom=name;
                this->addresse=address;
                this->IBAN=IBANc;
                this->somme=sum;

        }


        string getName(){

            return nom;
        }


        string getAddress(){

            return addresse;
        }

        string getIBAN(){

            return IBAN;
        }

        double getSum(){

            return somme;
        }


        void depositSum(double x){

            somme=somme+x;
        }

        double retreatSum(double y){

            somme=somme-y;
            return y;
        }

};



int main()
{
    BankAccount b1("Robert Dovlete","Mihai Eminescu nr69","RO12342BJGH",1000);
    double n;
    int e;
    cout<<"Enter your option:"<<endl;
    cout<<"Press 1 to deposit ammount"<<endl;
    cout<<"Press 2 to retreat ammount"<<endl;
    cin>>e;
    switch(e){

    case 1:

    cout<<"Enter deposit ammount:";
    cin>>n;
    b1.depositSum(n);
    break;

    case 2:

    cout<<"Enter retreat ammount:"<<endl;
    cin>>n;
    cout<<"The amount that's been gathered from your account is:"<<b1.retreatSum(n)<<endl;
    break;


    default:
        cout<<"Banking class";


    }

    b1.depositSum(20);
    cout<<b1.getSum()<<endl;
    cout<<b1.retreatSum(40)<<endl;
    cout<<b1.getSum()<<endl;
    cout<<b1.getName()<<" "<<b1.getAddress()<<endl;
    return 0;
}
