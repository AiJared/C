#include <stdio.h>

int main(){

    // arithmetic operators

    // + (addition)
    // - (subtration)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 2;

    /*
    if you are dividing two numbers and your divisor is an integer, 
    then cast it as a float.
    Also, it is good practice to give the division operation a float datatype.
    */ 
    float z = x / (float) y; 

    printf("%d", z);
    return 0;
}