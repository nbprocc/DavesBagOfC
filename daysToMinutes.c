#include <stdio.h>

int main() {
    int days, minutes;  /*Declared Variables*/

    printf("Enter the number of days: "); /*asks for user input*/
    scanf("%d", &days); /*Reads input and determines it is an integer, passes back to days variable*/

    minutes = days * 24 * 60; /*equation to derive the number of minutes in a given day*/

    printf("There are %d minutes in %d days!\n", minutes, days); /*output of equation in a string*/

    return 0;
}