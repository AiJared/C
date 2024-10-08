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

    // / (division)
    /*
    if you are dividing two numbers and your divisor is an integer, 
    then cast it as a float.
    Also, it is good practice to give the division operation a float datatype.
    */ 
    float z = x / (float) y; 

    // % (modulus)
    /*
    It gives you the remainder of a division.
    You can also use it to find out if a number is even or odd.
    */
    int a = x % y;

    // ++ (increment)
    /*
    Increase a number by 1
    */
    x++;
    
    // Decrement
    /*
    Decrese a number by 1
    */
    y--;

    // printf("%d", z);
    //printf("%d", a);
    // printf("%d", x);
    printf("%d", y);
    
    return 0;
}