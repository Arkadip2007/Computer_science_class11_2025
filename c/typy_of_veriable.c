#include <stdio.h>
int main()
{
    int a;                //--"a"is the variable ,type -->integer
    a = 10;               // the value of a is 10
    printf("%d", a);      // %d use to the value of . and
    

    float b;              //--"b" is the variable ,type -->float
    b = 10.5;             // the value of b is 10.5
    printf("\n%f", b);    // %f use to the value of b


    char c;               //--"c" is the variable ,type -->character
    c = 'A';              // the value of c is 'A'
    printf("\n%c", c);    // %c use to the value of c


    double d;             //--"d" is the variable ,type -->double
    d = 10.123456789;     // the value of d is 10.123456789
    printf("\n%lf", d);   // %lf use to the value of d


    long e;               //--"e" is the variable ,type -->long
    e = 1000000;          // the value of e is 1000000
    printf("\n%ld", e);   // %ld use to the value of e


    short f;              //--"f" is the variable ,type -->short
    f = 100;              // the value of f is 100
    printf("\n%hd", f);   // %hd use to the value of f


    unsigned int g;       //--"g" is the variable ,type -->unsigned integer
    g = 100;              // the value of g is 100
    printf("\n%u", g);    // %u use to the value of g


    unsigned long h;      //--"h" is the variable ,type -->unsigned long
    h = 1000000;          // the value of h is 1000000
    printf("\n%lu", h);   // %lu use to the value of h


    unsigned short i;     //--"i" is the variable ,type -->unsigned short
    i = 100;              // the value of i is 100
    printf("\n%hu", i);   // %hu use to the value of i


    unsigned char j;      //--"j" is the variable ,type -->unsigned character
    j = 'A';              // the value of j is 'A'
    printf("\n%hhu", j);  // %hhu use to the value of j


    long long k;          //--"k" is the variable ,type -->long long
    k = 10000000000;      // the value of k is 10000000000
    printf("\n%lld", k);  // %lld use to the value of k


    unsigned long long l; //--"l" is the variable ,type -->unsigned long long
    l = 10000000000;      // the value of l is 10000000000
    printf("\n%llu", l);  // %llu use to the value of l


    _Bool m;              //--"m" is the variable ,type -->boolean
    m = 1;                // the value of m is 1 (true)
    printf("\n%d", m);    // %d use to the value of m (1 for true, 0 for false)


    void *n;              //--"n" is the variable ,type -->void pointer
    n = NULL;             // the value of n is NULL (no address)
    printf("\n%p", n);    // %p use to the value of n (address, NULL in this case)
    // Note: The void pointer is not dereferenced here, as it does not point to a specific type.

    return 0;
}
