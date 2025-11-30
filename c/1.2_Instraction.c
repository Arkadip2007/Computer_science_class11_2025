#include <stdio.h>

int main()
{
    int a;    //  declaration instruction
    a=5; // value of a is 5 // arithmetic instruction
    int b;
    a=b; // now value of b is also 5 
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    int c,d,e;
    c=d=e=10; // now value of c,d,e is 10


    int f =20;
    float g =3.14;
    int h = f + g;
    printf("Value of h: %d\n", h); // it will print 23 because float value 3.14 is truncated to 3 during addition

    
    //int i = j +24 ; // error because j is not declared before use
    int j = 15; // although j is declared here but code  is error because j is used before declaration
    //printf("Value of i: %d\n", i);

    // talk about arithematical instruction

    int k = 10*(9+64-2); // 10, 9, 64, 2 are operands and *, +, - are operators
    printf("Value of k: %d\n", k); // it will print 710

    int l,m,n;
    l = 5;
    m = 10;
    //l*m=n; // illegal instruction because l*m is not a variable it is an expression
    // correct way is n = l * m;
    printf("Value of n: %d\n", n); // it will print 50

        
    // talk about remainder operator %
    int p = 10;
    int q = 3;
    printf("Remainder when %d is divided by %d is %d\n", p, q, p % q); // it will print 1
    printf("Remainder when %d is divided by %d is %d\n", p, q, -p % q); // it will print -1
    printf("Remainder when %d is divided by %d is %d\n", p, -q, p % -q); // it will print 1 because numerator sign is taken
    printf("Remainder when %d is divided by %d is %d\n", p, q, -p % -q); // it will print -1
    
    
    
    
    return 0;
}