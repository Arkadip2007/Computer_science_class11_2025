#include <stdio.h>
int main()
{
    int a;                //--"a"is the variable ,type -->integer
    a = 10;               // the value of a is 10   
    printf("%d", a);      // %d use to the value of . and
    //In "32-bit system" and "64-bit system" the range of integer is 4 bytes (-2,147,483,648 to 2,147,483,647)

    float b;              //--"b" is the variable ,type -->float
    b = 10.5;             // the value of b is 10.5
    printf("\n%f", b);    // %f use to the value of b
    //In "32-bit system" the range of float is 4 bytes (1.2E-38 to 3.4E+38) and in "64-bit system" the range of float is 8 bytes (2.3E-308 to 1.7E+308)

    char c;               //--"c" is the variable ,type -->character
    c = 'A';              // the value of c is 'A'
    printf("\n%c", c);    // %c use to the value of c
    //In "32-bit system" and "64-bit system" the range of character is 1 byte (-128 to 127)

    double d;             //--"d" is the variable ,type -->double
    d = 10.123456789;     // the value of d is 10.123456789
    printf("\n%lf", d);   // %lf use to the value of d
    //In "32-bit system" the range of double is 8 bytes (2.3E-308 to 1.7E+308) and in "64-bit system" the range of double is 8 bytes (2.3E-308 to 1.7E+308)

    long e;               //--"e" is the variable ,type -->long
    e = 1000000;          // the value of e is 1000000
    printf("\n%ld", e);   // %ld use to the value of e
    //In "32-bit system" the range of long is 4 bytes (-2,147,483,648 to 2,147,483,647) and in "64-bit system" the range of long is 8 bytes (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)

    short f;              //--"f" is the variable ,type -->short
    f = 100;              // the value of f is 100
    printf("\n%hd", f);   // %hd use to the value of f
    //In "32-bit system" and "64-bit system" the range of short is 2 bytes (-32,768 to 32,767)

    unsigned int g;       //--"g" is the variable ,type -->unsigned integer
    g = 100;              // the value of g is 100
    printf("\n%u", g);    // %u use to the value of g
    //In "32-bit system" the range of unsigned int is 4 bytes (0 to 4,294,967,295) and in "64-bit system" the range of unsigned int is 4 bytes (0 to 4,294,967,295)

    unsigned long h;      //--"h" is the variable ,type -->unsigned long
    h = 1000000;          // the value of h is 1000000
    printf("\n%lu", h);   // %lu use to the value of h
    //In "32-bit system" the range of unsigned long is 4 bytes (0 to 4,294,967,295) and in "64-bit system" the range of unsigned long is 8 bytes (0 to 18,446,744,073,709,551,615)

    unsigned short i;     //--"i" is the variable ,type -->unsigned short
    i = 100;              // the value of i is 100
    printf("\n%hu", i);   // %hu use to the value of i
    //In "32-bit system" and "64-bit system" the range of unsigned short is 2 bytes (0 to 65,535)

    unsigned char j;      //--"j" is the variable ,type -->unsigned character
    j = 'A';              // the value of j is 'A'
    printf("\n%hhu", j);  // %hhu use to the value of j
    //In "32-bit system" and "64-bit system" the range of unsigned char is 1 byte (0 to 255)

    long long k;          //--"k" is the variable ,type -->long long
    k = 10000000000;      // the value of k is 10000000000
    printf("\n%lld", k);  // %lld use to the value of k
    //In "32-bit system" the range of long long is 8 bytes (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807) and in "64-bit system" the range of long long is 8 bytes (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)

    unsigned long long l; //--"l" is the variable ,type -->unsigned long long
    l = 10000000000;      // the value of l is 10000000000
    printf("\n%llu", l);  // %llu use to the value of l
    //In "32-bit system" the range of unsigned long long is 8 bytes (0 to 18,446,744,073,709,551,615) and in "64-bit system" the range of unsigned long long is 8 bytes (0 to 18,446,744,073,709,551,615)

    _Bool m;              //--"m" is the variable ,type -->boolean
    m = 1;                // the value of m is 1 (true)
    printf("\n%d", m);    // %d use to the value of m (1 for true, 0 for false)
    //In "32-bit system" and "64-bit system" the range of _Bool is 1 byte (0 to 1)

    void *n;              //--"n" is the variable ,type -->void pointer
    n = NULL;             // the value of n is NULL (no address)
    printf("\n%p", n);    // %p use to the value of n (address, NULL in this case)
    //In "32-bit system" the range of void pointer is 4 bytes (0x00000000 to 0xFFFFFFFF) and in "64-bit system" the range of void pointer is 8 bytes (0x0000000000000000 to 0xFFFFFFFFFFFFFFFF)
    // Note: The void pointer is not dereferenced here, as it does not point to a specific type.

    return 0;
}
