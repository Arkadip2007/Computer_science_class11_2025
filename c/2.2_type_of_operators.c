#include <stdio.h>

int main()
{
    //now talk about operators in C language
    //operators are special symbols that perform operations on variables and values.
    // Types of operators in C language


    //1. Arithmetic Operators*                |(+ , - , * , / , %)
    //2. Relational Operators*                |(== , != , > , < , >= , <=)
    //3. Logical Operators*                   |(&& , || , !)
    //4. Assignment Operators*                |(= , += , -= , *= , /= , %= , &= , |= , ^= , <<= , >>=)
    //5. Increment and Decrement Operators    |(++ , --)
    //6. Conditional (Ternary) Operator       |(?:)
    //7. Pointer Operators*                   |(& , *, ->) 
    //8. Bitwise Operators                    |(& , | , ^ , ~ , << , >>)
    //9. Comma Operator                       |(, )
    //10. Sizeof Operator                     |(sizeof)
    //11. Miscellaneous Operators             |(sizeof , & , * , ? : , , )
    //12. Typecast Operator                   |( (type) )
    //13. Preprocessor Operators              |(# , ##)
    //14. Member Access Operators             |(. , ->)
    //15. other Operators                     |( , , )

    //1. Arithmetic Operators (+ , - , * , / , %)
    int a = 10;
    int b = 5;
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division
    printf("a %% b = %d\n", a % b); // Modulus
    //some  important points about arithmetic operators
    //  1. Division operator (/) between two integers results in an integer (floor value)
    //  2. Modulus operator (%) can only be used with integers
    //  3*. order of precedence: *, /, % --> + , - , -
    //  4. same precedence then left to right
    //  5*. use parentheses to change precedence


    //2. Relational Operators (== , != , > , < , >= , <=)
    printf("a == b: %d\n", a == b); // Equal to
    printf("a != b: %d\n", a != b); // Not equal to
    printf("a > b: %d\n", a > b);   // Greater than
    printf("a < b: %d\n", a < b);   // Less than
    printf("a >= b: %d\n", a >= b); // Greater than or equal to
    printf("a <= b: %d\n", a <= b); // Less than or equal to
    // Relational operators return 1 (true) or 0 (false)
    // they are often used in conditional statements like if, while, for etc.
    // order of relational opperators precedence is same and left to right associativity and they have lower precedence than arithmetic operators


    //3. Logical Operators (&& , || , !)
    int x = 1; // true
    int y = 0; // false
    printf("x && y: %d\n", x && y); // Logical AND
    printf("x || y: %d\n", x || y); // Logical OR
    printf("!x: %d\n", !x);         // Logical NOT
    printf("!y: %d\n", !y);         // Logical NOT
    // Logical operators are used to combine multiple conditions
    // they also return 1 (true) or 0 (false)
    // order of precedence: ! --> && --> ||
    // use parentheses to change precedence


    //4. Assignment Operators (= , += , -= , *= , /= , %= , &= , |= , ^= , <<= , >>=)
    int c = 10;       // Simple assignment
    c += 5;          // Equivalent to c = c + 5
    printf("c after c += 5: %d\n", c);
    c -= 3;          // Equivalent to c = c - 3
    printf("c after c -= 3: %d\n", c);
    c *= 2;          // Equivalent to c = c * 2
    printf("c after c *= 2: %d\n", c);
    c /= 4;          // Equivalent to c = c / 4
    printf("c after c /= 4: %d\n", c);
    c %= 3;          // Equivalent to c = c % 3
    printf("c after c %%= 3: %d\n", c);
    // Assignment operators are used to assign values to variables
    // they can also perform arithmetic operations and assignment in one step   
    // order of precedence is right to left


    //5. Increment and Decrement Operators (++ , --)
    int d = 10;
    printf("d before increment: %d\n", d);
    d++; // Post-increment
    printf("d after d++: %d\n", d);
    ++d; // Pre-increment
    printf("d after ++d: %d\n", d);
    d--; // Post-decrement
    printf("d after d--: %d\n", d);
    --d; // Pre-decrement
    printf("d after --d: %d\n", d);
    // Increment operator (++) increases the value of a variable by 1
    // Decrement operator (--) decreases the value of a variable by 1
    // Pre-increment/decrement modifies the value before it is used in an expression
    // Post-increment/decrement modifies the value after it is used in an expression


    //end of basic operators in C language


    //advanced operators will be discussed later

   

    return 0;
}