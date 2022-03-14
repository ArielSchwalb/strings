/******************************************************************************

This program allows the user to print out their email by using a character array.

*******************************************************************************/
#include <stdio.h>

int main()
{

    /*Declare variables. In C, strings must be arrays.*/
    char email[70];
    char c;

    /*Ask for email. Use gets function to store it.*/
    /*%s does not need an & in front of it.*/
    printf("Please enter your email: ");
    scanf("%s", email);

    printf("Your email is %s.", email);

    return 0;
}





