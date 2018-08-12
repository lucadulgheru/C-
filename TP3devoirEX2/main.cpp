#include <iostream>
#include <cmath>
using namespace std;

int i,j,x,arrayX[10],arrayY[10],arrayXY[10];
int b[6],c[6];

template <class T>
class Point{



public:

    T coord_x;
T coord_y;

    Point(){}
    Point(T x, T y){

    this->coord_x=x;
    this->coord_y=y;


    }

   void setX(T newX){

      coord_x=coord_x+newX;

   }

    void setY(T newY){

    coord_y=coord_y+newY;

}
    void setXY(T newX, T newY){

        coord_x=coord_x+newX;
        coord_y=coord_y+newY;

}

    void reset(){

        coord_x=coord_y=0;

}

int getX(){


return coord_x;

}

int getY(){


return coord_y;
}


int sommeXY(){

    return coord_x+coord_y;

}




};


template <typename T>
    void triage(T &a)
{


       for(i=2;i<5;i++)
  if (a[i]<a[i-1])
      { x=a[i];

            j=i-1;

while (j>=0 && a[j]>x)
               {

               a[j+1]=a[j];

               j--;

               }

       a[j+1]=x;

      }

      for(i=0;i<5;i++)
        cout<<a[i]<<" ";
};






int main()
{





    Point<int> p1(2,-10);
    Point<int> p2(5,-2);
    Point<int> p3(10,9);
    Point<int> p4(-9,14);
    Point<int> p5(5,-9);


        arrayX[0]=p1.getX();
        arrayX[1]=p2.getX();
        arrayX[2]=p3.getX();
        arrayX[3]=p4.getX();
        arrayX[4]=p5.getX();



        arrayXY[0]=p1.sommeXY();
        arrayXY[1]=p2.sommeXY();
        arrayXY[2]=p3.sommeXY();
        arrayXY[3]=p4.sommeXY();
        arrayXY[4]=p5.sommeXY();

        arrayY[0]=p1.getY();
        arrayY[1]=p2.getY();
        arrayY[2]=p3.getY();
        arrayY[3]=p4.getY();
        arrayY[4]=p5.getY();


cout<<"Triage par l'axe OX: ";

triage(arrayX);

cout<<endl;
cout<<"Triage par l'axe OY: ";

triage(arrayY);

cout<<endl;

cout<<"Triage par la somme entre X et Y: ";
triage(arrayXY);

return 0;
}
