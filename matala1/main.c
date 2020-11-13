//
// Created by david on 11/11/20.
//
//
#include <stdio.h>
#include "myMath.h"
int main() {

double  x,x1,x2,x3;

printf("Please inset a real number:");
scanf("%lf",&x);


//first equation - f(x) = e^x + x^3 − 2
double ePowX = Exponent(down(x));
double xPow3 = Power(x,3);

x1=  sub(add(ePowX,xPow3),2);
printf("\nThe value of f(x) = e^x + x^3 − 2 at the point %.4lf is %.4lf\n",x ,x1);


// second equation - f(x) = 3x + 2X^2
double threeX = mul(x,3);
double XPow2 = Power(x,2);
double twoXPow2 = mul(XPow2,2);

x2=add(threeX,twoXPow2);
printf("\nThe value of f(x) = 3x + 2X^2 at the point %.4lf is %.4lf\n",x ,x2);


// third equation - f(x) = (4x^3)/5 -2x
    double XPow3 = Power(x,3);
    double fourXPow3 = mul(XPow3,4);
    double fourXPow3Div5 = div(fourXPow3,5);
    double tow_X = mul(x,2);

    x3=sub(fourXPow3Div5,tow_X);
    printf("\nThe value of f(x) = (4x^3)/5 -2x at the point %.4lf is %.4lf\n",x ,x3);


    return 0;
}

