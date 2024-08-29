#include <stdio.h>
#include <string.h>

int main(){

    char name[25]; // bytes
    int age;

    printf("\nWhat's your name?");
    scanf("%s", &name); // does not support white spaces

    // If your array of characters has white spaces then use fgets() as shown below
    fgets(name, 25, stdin);
    /*
    fgets comes with \n which means that it will break the line into two and
    continue it on a new line. If you want to get rid of that \n then you'll first
    #include <string.h> at the top which basically allows you to work with strings then
    do the following:
    */
    name[strlen(name)-1] = '\0';

    printf("\nHow old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);
    
    
    return 0;
}