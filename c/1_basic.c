#include<stdio.h>
int main()
{
    //c is programming language  _(^-^)_
    printf("C is a general-purpose programming language.\n");
    printf("c was developed by Dennis Ritchie at Bell Labs in 1972.\n");
    //use of c language
    printf("C language is used for system programming, developing operating systems, embedded systems,USB driver(like keyboard ,Mouse,pen drive any input device ), Microcontrolar,and high-performance applications.\n");
    //features of c language
    printf("C language features include simplicity, efficiency, portability, and low-level access to memory.\n");
    //advantages of c language
    printf("Advantages of C language are its speed, flexibility, and wide range of applications.\n");
    
    

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~_(^-^)_~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //structure of c program
    //      #include <stdio.h>  //preprocessor directive, it includes standard input-output header file .header file contains declarations of functions and macros used for input and output operations like printf() and scanf(). <stdio.h> is the standard header file for input-output operations in C language.also like #include <conio.h> , #include <math.h> {--> it use for mathematical operations} etc.
    //      int main()         //main function ,the execution of the program starts from here ,int means the return type of the function is integer and main is the name of the function also primary function,starting point of program also called Driver function.
    //      {                 //start of main function body
    //          /*code statements*/
    //         return 0;     //return statement, 'return' means to give back value to the operating system and '0' means successful execution
    //      }                 //end of main function body
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    //compilation and execution process of c program
    printf("The compilation and execution process of a C program involves several steps:\n");
    printf("1. Preprocessing: The preprocessor handles directives (like #include and #define) and prepares the code for compilation.\n");
    printf("2. Compilation: The compiler translates the preprocessed code into assembly language specific to the target machine.\n");
    printf("3. Assembly: The assembler converts the assembly code into machine code (object code).\n");
    printf("4. Linking: The linker combines object code with libraries to create an executable file.\n");   
    printf("5. Execution: The operating system loads the executable file into memory and runs the program.\n"); 
    // name.c --> preprocessing --> name.i --> compilation --> name.s --> assembly --> name.o --> linking --> name.exe(in windows) or name.out(in linux) --> execution --> output

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //now tooking about identifiers in c language
    printf("Identifiers in C language are names used to identify variables, functions, arrays, and other user-defined elements.\n");
    //rules for naming identifiers in c language
    printf("Rules for naming identifiers in C language:\n");
    printf("1. Identifiers must begin with a letter (A-Z, a-z) or an underscore (_).\n");
    printf("2. Subsequent characters can be letters, digits (0-9), or underscores (_).\n");
    printf("3. Identifiers are case-sensitive (e.g., 'Variable' and 'variable' are different).\n");
    printf("4. Identifiers cannot be the same as C language keywords (e.g., int, float, return).\n");
    printf("5. There is no limit on the length of identifiers, but it is recommended to keep them meaningful and concise.\n");  
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //now tooking about syntax in c language
    printf("In C language, the syntax refers to the set of rules that define the structure and format of valid statements and expressions.\n"); 
    //all inctractions are end with semicolon(;) and also case sensitive like 'int' and 'Int' are different
    //in c language white spaces (spaces, tabs, and new lines) are ignored by the compiler except when they are used to separate tokens.
    // multiple statements can be written on a single line separated by semicolons, but it is generally recommended to write one statement per line for better readability.
    // indentation and formatting are not enforced by the C compiler, but they are important for code readability and maintainability.
    //inctractions are executed from top to bottom in the order they are written, unless control flow statements (like if, for, while) alter the execution sequence.
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //now tooking about keywords ,file extensions,variable names,constants,escape sequences,comments and data types in c language
    // keywords in c language
    printf("C language has 32 keywords, including int, float, char, if, else, while, for, return, and void.\n");
    //all keywords in c language
    printf("The 32 keywords in C language are: auto, break, case, char, const, continue, default, do, double, else, enum, extern, float, for, goto, if, int, long, register, return, short, signed, sizeof, static, struct, switch, typedef, union, unsigned, void, volatile, while.\n");    
    //file extensions in c language
    printf("The common file extensions for C language source files are .c for source code files and .h for header* files.\n");
   
   
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //plz  variable name is meaningfull in code 
    int number_of_students = 50; // meaningful variable name ,dont use like a,b,c
    printf("Number of students: %d\n", number_of_students);

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // now tooking about constant in c language
    //integer constant (-10,0,25)
    const int max_students = 100;
    printf("Max students: %d\n", max_students);
    //floating/real point constant (3.14,0.0,-2.5)
    const float pi = 3.14;
    printf("Value of pi: %.2f\n", pi);
    //character constant ('A','b','1','$','@','#')--> must be use ingle inverted comma and single character 
    const char grade = 'A';
    printf("Grade: %c\n", grade);
    //string constant ("Hello, World!","C Programming")--> must be use double inverted comma
    const char message[] = "Hello, World!";  // it an array* of characters
    printf("Message: %s\n", message);   

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //escape sequences in c language
    // #include<stdio.h>
    // int main(){
    // printf("Escape Sequences in C Language:\n");
    // printf("New Line: Hello\nWorld\n");
    // printf("Tab: Hello\tWorld\n");
    // printf("Backslash: C:\\Program Files\\\n");
    // printf("Double Quote: She said, \"Hello!\"\n");
    // printf("Single Quote: It\'s a beautiful day!\n");   
    // return 0;
    // } *plz run this code separately ,you can also run code by "Code Runner" extension in vs code only work select the part of code ;)
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //now tooking about comments in c language
    // we use two types of comments in c language
    //for single line comment we use // this is single line comment
    printf("This is a single line comment example.\n");
    //for multi line comment we use /*  */
    /*Multi-line comment:
       This is a multi-line comment.
       It can span multiple lines.*/
    printf("This is a multi-line comment example.\n");
    // all comments are ignored by the compiler and are used to explain the code to human readers.

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // some example of comments in c language
    // This program calculates the sum of two numbers
    int a = 5; // First Number 
    int b = 6; // second Number 
    int sum = a + b; // sum of a and b

    printf("sum of a and b is %d\n", sum);
    printf("sum of %d and %d is %d\n", a, b, a + b ); // ---> it also work




    // now tooking about data types in c language       
    printf("Data Types in C Language:\n");
    printf("1. int: Integer data type for whole numbers.\n");
    printf("2. float: Floating-point data type for decimal numbers.\n");
    printf("3. double: Double-precision floating-point data type for more precise decimal numbers.\n");
    printf("4. char: Character data type for single characters.\n");
    printf("5. void: Represents no value or no type.\n");
    printf("6. _Bool: Boolean data type for true/false values.\n");

    return 0;
}