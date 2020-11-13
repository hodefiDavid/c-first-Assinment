#include <stdio.h>

//
// Created by david on 11/8/20.
//
float add(float x , float y) {
    return x + y;
}

float sub(float x , float y) {
    return x - y;
}

double mul(double x , int y) {
    return x*y;
}
double div(double x, int y) {
    if(y==0){
        printf("you cant divide by zero");
        return 0;
    }
    return x/y; }

