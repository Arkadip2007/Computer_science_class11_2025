#include<stdio.h>
int main ()
{
    printf("Using library function in C \n");
    //first we will use printf function from stdio.h library
    printf("using printf function from stdio.h library \n");

    // now we will use scanf function from stdio.h library
    int a;
    printf("Enter a number: "); // also use printf function to view message
    scanf("%d", &a); //scanf function to take input from user
    // here %d is format specifier for integer and &a is the address of variable a where the input value will be stored
    printf("You entered: %d\n", a); //printf function again to show output

    // now we will use getchar function from stdio.h library
    printf("Press any key to continue...\n");
    getchar(); // to consume the newline character left by previous scanf
    char ch;
    ch = getchar(); // to take a character input from user
    printf("You pressed: %c\n", ch); // to show the character entered by user

    // now we will use putchar function from stdio.h library
    printf("Displaying character using putchar function: ");
    putchar(ch); // to display the character using putchar function
    printf("\n");

    //its enough for basic demonstration of using library functions in C
    

    return 0;
}
