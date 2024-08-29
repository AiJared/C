#include <stdio.h>

int main(){

    char name[25]; // bytes
    int age;

    printf("\nWhat's your name?");
    scanf("%s", &name); // does not support white spaces

    // If your array of characters has white spaces then use fgets() as shown below
    fgets(name, 25, stdin);

    printf("\nHow old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);
    
    
    return 0;
}