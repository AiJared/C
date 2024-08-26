#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';        // single character %c
    char b[] = "Bro";     // array of characters %s
    float c = 3.141592;   // 4 bytes (32 bits of precision) 6 - 7 digitd %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision)15 to 16 digitd %lf
    bool e = true; // 1 byte (true or false) $d

    char f = 100; // 1 byte (-128 to + 127) %d or %c
    unsigned char g = 255; // 1 byte (0 to 255) %d or %c

    short int h = 32767; // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d
}