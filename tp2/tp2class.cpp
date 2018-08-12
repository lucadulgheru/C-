#include <iostream>
using namespace std;


class Point{

public:

int coord_x;
int coord_y;


    Point(){};
    Point(int x, int y){

    this->coord_x=x;
    this->coord_y=y;


    }

   void setX(int newX){

      coord_x=coord_x+newX;

   }

    void setY(int newY){

    coord_y=coord_y+newY;

}
    void setXY(int newX, int newY){

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



/*class complex{

private:

    double re;
    double im;

public:

    complex() {};
    complex(double real, double imaginaryy){

        this->re=real;
        this->im=imaginaryy;


    }

    double getRe(){

        return re;
    }

    double getIm(){

        return im;
    }


    complex complex_conjugate(){


        complex conjugate(re,-im);
        return conjugate;

    }


    complex complex_addition(double x,double y){

            complex addition(re+x,im+y);

            return addition;
    }

    complex complex_multiplication(double x,double y){

            complex multiplication(re*x-im*y,re*y+im*x);

            return multiplication;

    }
}; */

int main(){


        /*complex number(2,3);
        cout<<number.getRe()<<"+"<<number.getIm()<<"*i"<<endl;
        cout<<number.complex_addition(4,8).getRe()<<"+"<<number.complex_addition(4,8).getIm()<<"*i"<<endl;
        cout<<number.complex_multiplication(4,8).getRe()<<"+"<<number.complex_multiplication(4,8).getIm()<<"*i"<<endl;
        */

            Point p1(4,5);
            p1.setX(9);
            p1.setY(10);
            p1.setXY(3,4);

            cout<<p1.getX()<<endl<<p1.getY();




return 0;
}
