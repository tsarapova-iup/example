#include <iostream>
#include <cmath>
#include "boo.h"




void foo(double a, double b, double c);



void foo(double a, double b, double c) {

    double x1, x2, d; //a, b, c, d, x1, x2;
    //std::cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d == 0) {
        std::cout << -b / (2 * a) << " " << -b / (2 * a);
    }
    else if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << (x1 > x2 ? x2 : x1) << " " << (x1 > x2 ? x1 : x2);

    }
    else { std::cout << "No real roots"; }


}


int main(int argc, char** argv)
{

    boo(10, 20, 30);
   
}
