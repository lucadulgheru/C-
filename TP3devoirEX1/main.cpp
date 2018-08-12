#include <iostream>
using namespace std;

template <class T>

class Point{

public:

T coord_x;
T coord_y;


    Point(){};
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


};

int main()
{
        Point <int> a(2,4);
        a.setX(2);
        a.setY(3);
        cout<<"Current point location: "<<a.getX()<<" on the X axis and "<<a.getY()<<" on the Y axis."<<endl;
        a.reset();
        cout<<"Point location after reset: "<<a.getX()<<" on the X axis and "<<a.getY()<<" on the Y axis."<<endl;


    return 0;
}
