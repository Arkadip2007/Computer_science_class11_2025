#include <stdio.h>

int main()
{
    // Basic problem solving using C programming language

    // lesson 1: input, process, output
    // problem_1|| write a C program  to calculate area of a Rectangle
        int length;
        int breadth;

        // input from user
        printf("Enter length of the rectangle \n");
        scanf("%d", &length);
        printf("Enter breadth of the rectangle \n");
        scanf("%d", &breadth);

        // process... to calculate area
        int area = length * breadth;

        // output section
        printf("process....\nThe area of the rectangle %d\n", area);

    // problem_2|| calculate the area of the circle
        int redius;
        printf("enter redius __ \n");
        scanf("%d", &redius);
        int area_circle = 3.14 * redius * redius;
        printf("Area of the circle is %d",area_circle);

        
    // problem_3|| convert tempareture(*C --> *F)
        int C,F;
        F = (C * 9/5) + 32;
        printf("enter tempareture in Celsius (*C) ");
        scanf("%d", &C);
        printf("tempareture in Fahrenheit is %d *F",F);


    // problem_4|| swap two numbers
        int a,b,temp;
        printf("enter value of a and b \n");
        scanf("%d %d", &a,&b);
        // swaping logic
        temp = a;
        a = b;
        b = temp;
        printf("after swaping value of a is %d and b is %d \n",a,b);

        //alternate swaping logic without using third variable
        int x,y;
        printf("enter value of x and y \n");
        scanf("%d %d", &x,&y);
        x = x + y; // x now becomes 15
        y = x - y; // y becomes 10
        x = x - y; // x becomes 5
        printf("after swaping value of x is %d and y is %d \n",x,y);


    // problem_5|| calculate simple interest
        int principal, rate, time;
        printf("enter principal amount, rate and time \n");
        scanf("%d %d %d", &principal, &rate, &time); //input value in terminal use space to separate values
        int simple_interest = (principal * rate * time) / 100;
        printf("simple interest is %d \n", simple_interest);


    //end of basic problems


    //lesson 2: instructions and operators
    // problem_1|| find largest of three numbers using conditional operator
        int n1, n2, n3, largest;
        printf("enter three numbers \n");
        scanf("%d %d %d", &n1, &n2, &n3);
        largest = (n1 > n2) ? ( (n1 > n3) ? n1 : n3 ) : ( (n2 > n3) ? n2 : n3 );
        printf("largest number is %d \n", largest); 


    //problem_2|| which of following is invalid in C ?
    //   (i)     int a; b=a;                 [wrong]
    //   (ii)    int v = 3^3;                [wrong but not return error,because ^ is bitwise XOR operator]
    //   (iii)   char dt = '21 dec 2020';    [wrong]
    

    //problem_3|| write a program to check whether a number is divisible by 97 or not but not using if statement
        int number_97,check;
        printf("enter a number \n");
        scanf("%d", &number_97);
        check = number_97 % 97;
        
        printf("when output is zero ,so your number is divisible by 97,if not - not divisible\n ");
        printf("your output is %d \n", check);

    
    //problem_4|| 
          //  3.0 + 1 will be :
          //a) integer 4
          //b) float 4.0
          //c) double 4.0

          // answer is c) double 4.0 because 3.0 is double and in operation other integer value will be converted to double.

    //
    


    

            

    return 0;
}