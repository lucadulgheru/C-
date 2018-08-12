#include <iostream>
#include "queue1.h"
#include <string.h>
using namespace std;


    class Date{


        int day;
        int month;
        int year;

        public:


        Date(){}

        Date(int d, int m, int y){

            this->day=d;
            this->month=m;
            this->year=y;

        }

        int getDay(){

            return day;

        }

        int getMonth(){

            return month;

        }

        int getYear(){

            return year;

        }




    };



    class Message{


        string sender;
        string receiver;
        string content;
        Date datesent;



        public:

            Message(){}

            Message(string s, string r, string c, Date d){


                this->sender=s;
                this->receiver=r;
                this->content=c;
                this->datesent=d;

            }

            string getSender(){

                return sender;

            }

            string getReceiver(){

                return receiver;

            }

            string getContent(){

                return content;

            }

           void getDate(){

                cout<<datesent.getDay()<<"/"<<datesent.getMonth()<<"/"<<datesent.getYear();

            }




    };




    class MessageSender{



            public:


                MessageSender(){}

               void putMessage(Message m, Queue<Message> &x){

               x.enqueue(m);

            }




    };



    class MessageReceiver{


        public:


        MessageReceiver(){}


        void remMessage(Queue<Message> &x){

             x.dequeue();

        }



    };


int main()
{
        Date d1(19,3,2018);
        Date d2(24,6,2018);
        Message m1("Mario","Luigi","hallo",d1);
        Message m2("Luigi","Mario","holla",d1);
        Message m3("Mario","Peach","ey",d2);

   Queue<Message> q;


MessageSender ms;
MessageReceiver mr;
ms.putMessage(m1,q);
ms.putMessage(m2,q);
ms.putMessage(m3,q);
ms.putMessage(m2,q);

cout<<q.peek().getSender()<<endl;

q.peek().getDate();
cout<<endl;
mr.remMessage(q);
cout<<q.peek().getSender()<<endl;

cout<<endl;
    return 0;
}
