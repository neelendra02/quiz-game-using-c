#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#define MAX_QUESTION 1000
#define MAX_ANSWER 1000
#define TOTAL_QUESTION 100 // Total available questions

typedef struct {
    char question[MAX_QUESTION];
    char answerA[MAX_ANSWER];
    char answerB[MAX_ANSWER];
    char answerC[MAX_ANSWER];
    char answerD[MAX_ANSWER];
    char correct_answer;
} quiz_question;

void shuffle(int *array, int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    quiz_question quiz[TOTAL_QUESTION];
    int n;
    while(1){
    printf("press 1 for play quize question game\n");
    printf("press 2 for exist game\n");
    scanf("%d",&n);
    switch(n){
    case 1:{

    srand(time(0));
    // Questions 
    strcpy(quiz[0].question, "Which of the following is a valid C variable name?");
    strcpy(quiz[0].answerA, "int");
    strcpy(quiz[0].answerB, "float");
    strcpy(quiz[0].answerC, "var_name");
    strcpy(quiz[0].answerD, "123var");
    quiz[0].correct_answer = 'C';

    strcpy(quiz[1].question, "Which operator is used to access the value at the address stored in a pointer variable?");
    strcpy(quiz[1].answerA, "*");
    strcpy(quiz[1].answerB, "&");
    strcpy(quiz[1].answerC, "a");
    strcpy(quiz[1].answerD, "^");
    quiz[1].correct_answer = 'A';

    strcpy(quiz[2].question, "What is the correct syntax to declare a pointer?");
    strcpy(quiz[2].answerA, "int *ptr;");
    strcpy(quiz[2].answerB, "ptr int;");
    strcpy(quiz[2].answerC, "int ptr*;");
    strcpy(quiz[2].answerD, "*int ptr;");
    quiz[2].correct_answer = 'A';

    strcpy(quiz[3].question, "Which function is used to allocate memory dynamically in C?");
    strcpy(quiz[3].answerA, "malloc()");
    strcpy(quiz[3].answerB, "calloc()");
    strcpy(quiz[3].answerC, "realloc()");
    strcpy(quiz[3].answerD, "All of the above");
    quiz[3].correct_answer = 'D';

    strcpy(quiz[4].question, "What is the default return type of a function in C?");
    strcpy(quiz[4].answerA, "int");
    strcpy(quiz[4].answerB, "float");
    strcpy(quiz[4].answerC, "void");
    strcpy(quiz[4].answerD, "char");
    quiz[4].correct_answer = 'A';

    strcpy(quiz[5].question, "What is the output of: printf(\"%%d\", 10 == 10);?");
    strcpy(quiz[5].answerA, "1");
    strcpy(quiz[5].answerB, "0");
    strcpy(quiz[5].answerC, "10");
    strcpy(quiz[5].answerD, "Error");
    quiz[5].correct_answer = 'A';

    strcpy(quiz[6].question, "Which loop is guaranteed to execute at least once?");
    strcpy(quiz[6].answerA, "for loop");
    strcpy(quiz[6].answerB, "while loop");
    strcpy(quiz[6].answerC, "do-while loop");
    strcpy(quiz[6].answerD, "None");
    quiz[6].correct_answer = 'C';

    strcpy(quiz[7].question, "What is the size of an int data type in C?");
    strcpy(quiz[7].answerA, "2 bytes");
    strcpy(quiz[7].answerB, "4 bytes");
    strcpy(quiz[7].answerC, "8 bytes");
    strcpy(quiz[7].answerD, "Depends on the compiler");
    quiz[7].correct_answer = 'D';

    strcpy(quiz[8].question, "What is the value of x after this statement: x = 3/2*5;");
    strcpy(quiz[8].answerA, "7");
    strcpy(quiz[8].answerB, "7.5");
    strcpy(quiz[8].answerC, "5");
    strcpy(quiz[8].answerD, "2.5");
    quiz[8].correct_answer = 'A';

    strcpy(quiz[9].question, "Which operator is used for bitwise AND in C?");
    strcpy(quiz[9].answerA, "&&");
    strcpy(quiz[9].answerB, "&");
    strcpy(quiz[9].answerC, "||");
    strcpy(quiz[9].answerD, "|");
    quiz[9].correct_answer = 'B';

    strcpy(quiz[10].question, "Which type of memory is used to allocate variables declared in C?");
    strcpy(quiz[10].answerA, "Stack");
    strcpy(quiz[10].answerB, "Heap");
    strcpy(quiz[10].answerC, "Both Stack and Heap");
    strcpy(quiz[10].answerD, "None of the above");
    quiz[10].correct_answer = 'A';

    strcpy(quiz[11].question, "Which of the following is not a valid storage class in C?");
    strcpy(quiz[11].answerA, "auto");
    strcpy(quiz[11].answerB, "extern");
    strcpy(quiz[11].answerC, "static");
    strcpy(quiz[11].answerD, "public");
    quiz[11].correct_answer = 'D';

    strcpy(quiz[12].question, "What does the 'sizeof' operator return?");
    strcpy(quiz[12].answerA, "The size of an object in bits");
    strcpy(quiz[12].answerB, "The size of an object in bytes");
    strcpy(quiz[12].answerC, "The memory address of an object");
    strcpy(quiz[12].answerD, "None of the above");
    quiz[12].correct_answer = 'B';

    strcpy(quiz[13].question, "Which keyword is used to prevent modification of a variable?");
    strcpy(quiz[13].answerA, "volatile");
    strcpy(quiz[13].answerB, "const");
    strcpy(quiz[13].answerC, "static");
    strcpy(quiz[13].answerD, "extern");
    quiz[13].correct_answer = 'B';

    strcpy(quiz[14].question, "Which of the following is not a preprocessor directive?");
    strcpy(quiz[14].answerA, "#include");
    strcpy(quiz[14].answerB, "#define");
    strcpy(quiz[14].answerC, "#pragma");
    strcpy(quiz[14].answerD, "#function");
    quiz[14].correct_answer = 'D';

    strcpy(quiz[15].question, "Which of the following is not a valid C data type?");
    strcpy(quiz[15].answerA, "int");
    strcpy(quiz[15].answerB, "float");
    strcpy(quiz[15].answerC, "double");
    strcpy(quiz[15].answerD, "real");
    quiz[15].correct_answer = 'D';

    strcpy(quiz[16].question, "What is the output of: printf(\"%c\", 'A' + 1);");
    strcpy(quiz[16].answerA, "A");
    strcpy(quiz[16].answerB, "B");
    strcpy(quiz[16].answerC, "C");
    strcpy(quiz[16].answerD, "Error");
    quiz[16].correct_answer = 'B';

    strcpy(quiz[17].question, "Which format specifier is used to print a string?");
    strcpy(quiz[17].answerA, "%d");
    strcpy(quiz[17].answerB, "%s");
    strcpy(quiz[17].answerC, "%f");
    strcpy(quiz[17].answerD, "%c");
    quiz[17].correct_answer = 'B';

    strcpy(quiz[18].question, "What does the 'break' statement do in a loop?");
    strcpy(quiz[18].answerA, "Terminates the loop");
    strcpy(quiz[18].answerB, "Skips to the next iteration");
    strcpy(quiz[18].answerC, "Returns to the start of the loop");
    strcpy(quiz[18].answerD, "Continues the loop");
    quiz[18].correct_answer = 'A';

    strcpy(quiz[19].question, "What is the purpose of the 'return' statement in a function?");
    strcpy(quiz[19].answerA, "To stop the program");
    strcpy(quiz[19].answerB, "To exit a loop");
    strcpy(quiz[19].answerC, "To return a value to the caller");
    strcpy(quiz[19].answerD, "To print output");
    quiz[19].correct_answer = 'C';

    strcpy(quiz[20].question, "Which of the following is the correct way to declare a constant?");
    strcpy(quiz[20].answerA, "const int x = 10;");
    strcpy(quiz[20].answerB, "constant int x = 10;");
    strcpy(quiz[20].answerC, "int const x = 10;");
    strcpy(quiz[20].answerD, "Both A and C");
    quiz[20].correct_answer = 'D';

    strcpy(quiz[21].question, "What is a segmentation fault?");
    strcpy(quiz[21].answerA, "Accessing memory that the program does not own");
    strcpy(quiz[21].answerB, "Running out of stack space");
    strcpy(quiz[21].answerC, "Memory leak");
    strcpy(quiz[21].answerD, "None of the above");
    quiz[21].correct_answer = 'A';

    strcpy(quiz[22].question, "What is the purpose of the 'sizeof' operator?");
    strcpy(quiz[22].answerA, "To find the size of a variable in bits");
    strcpy(quiz[22].answerB, "To find the size of a variable in bytes");
    strcpy(quiz[22].answerC, "To find the memory address of a variable");
    strcpy(quiz[22].answerD, "None of the above");
    quiz[22].correct_answer = 'B';

    strcpy(quiz[23].question, "Which of the following is not a valid pointer declaration?");
    strcpy(quiz[23].answerA, "int *ptr;");
    strcpy(quiz[23].answerB, "int ptr;");
    strcpy(quiz[23].answerC, "char *ptr;");
    strcpy(quiz[23].answerD, "float *ptr;");
    quiz[23].correct_answer = 'B';

    strcpy(quiz[24].question, "Which of the following is an infinite loop?");
    strcpy(quiz[24].answerA, "for(;;) {}");
    strcpy(quiz[24].answerB, "while(1) {}");
    strcpy(quiz[24].answerC, "do {} while(1);");
    strcpy(quiz[24].answerD, "All of the above");
    quiz[24].correct_answer = 'D';

    strcpy(quiz[25].question, "Which function is used to read a string from standard input?");
    strcpy(quiz[25].answerA, "gets()");
    strcpy(quiz[25].answerB, "scanf()");
    strcpy(quiz[25].answerC, "fgets()");
    strcpy(quiz[25].answerD, "All of the above");
    quiz[25].correct_answer = 'D';

    strcpy(quiz[26].question, "What is a NULL pointer?");
    strcpy(quiz[26].answerA, "A pointer that points to no valid memory location");
    strcpy(quiz[26].answerB, "A pointer that points to a variable");
    strcpy(quiz[26].answerC, "A pointer that points to itself");
    strcpy(quiz[26].answerD, "None of the above");
    quiz[26].correct_answer = 'A';

    strcpy(quiz[27].question, "What is the output of this code: printf(\"%d\", 3 + 4 * 5);?");
    strcpy(quiz[27].answerA, "35");
    strcpy(quiz[27].answerB, "43");
    strcpy(quiz[27].answerC, "23");
    strcpy(quiz[27].answerD, "Error");
    quiz[27].correct_answer = 'C';

    strcpy(quiz[28].question, "Which of the following statements is true?");
    strcpy(quiz[28].answerA, "C does not support function overloading");
    strcpy(quiz[28].answerB, "C supports multiple inheritance");
    strcpy(quiz[28].answerC, "C does not support pointers");
    strcpy(quiz[28].answerD, "C supports operator overloading");
    quiz[28].correct_answer = 'A';

    strcpy(quiz[29].question, "Which of the following is used for comments in C?");
    strcpy(quiz[29].answerA, "// comment");
    strcpy(quiz[29].answerB, "/* comment */");
    strcpy(quiz[29].answerC, "# comment");
    strcpy(quiz[29].answerD, "Both A and B");
    quiz[29].correct_answer = 'D';

    strcpy(quiz[30].question, "Which keyword is used to define a macro in C?");
    strcpy(quiz[30].answerA, "#define");
    strcpy(quiz[30].answerB, "#macro");
    strcpy(quiz[30].answerC, "#define_macro");
    strcpy(quiz[30].answerD, "#const");
    quiz[30].correct_answer = 'A';

    strcpy(quiz[31].question, "What is the correct syntax for including a header file in C?");
    strcpy(quiz[31].answerA, "#include <header.h>");
    strcpy(quiz[31].answerB, "#header <header.h>");
    strcpy(quiz[31].answerC, "include <header.h>");
    strcpy(quiz[31].answerD, "#include header.h");
    quiz[31].correct_answer = 'A';

    strcpy(quiz[32].question, "Which of the following is used for multi-line comments in C?");
    strcpy(quiz[32].answerA, "// comment");
    strcpy(quiz[32].answerB, "/* comment */");
    strcpy(quiz[32].answerC, "# comment");
    strcpy(quiz[32].answerD, "<!-- comment -->");
    quiz[32].correct_answer = 'B';

    strcpy(quiz[33].question, "Which of the following functions is used to compare two strings?");
    strcpy(quiz[33].answerA, "strcmp()");
    strcpy(quiz[33].answerB, "strcompare()");
    strcpy(quiz[33].answerC, "strcmpi()");
    strcpy(quiz[33].answerD, "string_compare()");
    quiz[33].correct_answer = 'A';

    strcpy(quiz[34].question, "What is the result of 10 % 3?");
    strcpy(quiz[34].answerA, "1");
    strcpy(quiz[34].answerB, "3");
    strcpy(quiz[34].answerC, "0");
    strcpy(quiz[34].answerD, "2");
    quiz[34].correct_answer = 'A';

    strcpy(quiz[35].question, "What is the correct way to free allocated memory in C?");
    strcpy(quiz[35].answerA, "delete");
    strcpy(quiz[35].answerB, "free()");
    strcpy(quiz[35].answerC, "dispose()");
    strcpy(quiz[35].answerD, "clear()");
    quiz[35].correct_answer = 'B';

    strcpy(quiz[36].question, "Which of the following is a valid way to declare a function in C?");
    strcpy(quiz[36].answerA, "void function_name() {}");
    strcpy(quiz[36].answerB, "function_name() void {}");
    strcpy(quiz[36].answerC, "void: function_name() {}");
    strcpy(quiz[36].answerD, "function_name() = void {}");
    quiz[36].correct_answer = 'A';

    strcpy(quiz[37].question, "What is the output of this code: printf(\"%d\", sizeof(int));?");
    strcpy(quiz[37].answerA, "2");
    strcpy(quiz[37].answerB, "4");
    strcpy(quiz[37].answerC, "8");
    strcpy(quiz[37].answerD, "Depends on the system");
    quiz[37].correct_answer = 'B';

    strcpy(quiz[38].question, "Which library is required for using the printf() function?");
    strcpy(quiz[38].answerA, "<stdlib.h>");
    strcpy(quiz[38].answerB, "<stdio.h>");
    strcpy(quiz[38].answerC, "<string.h>");
    strcpy(quiz[38].answerD, "<conio.h>");
    quiz[38].correct_answer = 'B';

    strcpy(quiz[39].question, "Which of the following is a correct pointer declaration?");
    strcpy(quiz[39].answerA, "int *p;");
    strcpy(quiz[39].answerB, "int p*;");
    strcpy(quiz[39].answerC, "p* int;");
    strcpy(quiz[39].answerD, "int * p;");
    quiz[39].correct_answer = 'A';

    strcpy(quiz[40].question, "What does 'void' mean in a function declaration?");
    strcpy(quiz[40].answerA, "No return value");
    strcpy(quiz[40].answerB, "No parameters");
    strcpy(quiz[40].answerC, "No input");
    strcpy(quiz[40].answerD, "No variable");
    quiz[40].correct_answer = 'A';

    strcpy(quiz[41].question, "Which of the following is the correct way to declare a 2D array?");
    strcpy(quiz[41].answerA, "int arr[10][10];");
    strcpy(quiz[41].answerB, "int arr(10,10);");
    strcpy(quiz[41].answerC, "int arr[10];[10];");
    strcpy(quiz[41].answerD, "arr[10][10] int;");
    quiz[41].correct_answer = 'A';

    strcpy(quiz[42].question, "What is the result of the expression 5 + 2 * 3?");
    strcpy(quiz[42].answerA, "21");
    strcpy(quiz[42].answerB, "11");
    strcpy(quiz[42].answerC, "8");
    strcpy(quiz[42].answerD, "17");
    quiz[42].correct_answer = 'B';

    strcpy(quiz[43].question, "Which function is used to concatenate two strings?");
    strcpy(quiz[43].answerA, "strcat()");
    strcpy(quiz[43].answerB, "strcombine()");
    strcpy(quiz[43].answerC, "concat()");
    strcpy(quiz[43].answerD, "string_cat()");
    quiz[43].correct_answer = 'A';

    strcpy(quiz[44].question, "What is the output of: printf(\"%d\", 5 != 5);?");
    strcpy(quiz[44].answerA, "1");
    strcpy(quiz[44].answerB, "0");
    strcpy(quiz[44].answerC, "5");
    strcpy(quiz[44].answerD, "Error");
    quiz[44].correct_answer = 'B';

    strcpy(quiz[45].question, "Which of the following correctly checks for equality in C?");
    strcpy(quiz[45].answerA, "==");
    strcpy(quiz[45].answerB, "=");
    strcpy(quiz[45].answerC, "===");
    strcpy(quiz[45].answerD, "equals");
    quiz[45].correct_answer = 'A';

    strcpy(quiz[46].question, "What is the output of: printf(\"%d\", 1 && 0);?");
    strcpy(quiz[46].answerA, "1");
    strcpy(quiz[46].answerB, "0");
    strcpy(quiz[46].answerC, "Error");
    strcpy(quiz[46].answerD, "True");
    quiz[46].correct_answer = 'B';

    strcpy(quiz[47].question, "Which of the following is a valid function pointer declaration?");
    strcpy(quiz[47].answerA, "int (*p)();");
    strcpy(quiz[47].answerB, "int *p();");
    strcpy(quiz[47].answerC, "int p*();");
    strcpy(quiz[47].answerD, "(*p) int();");
    quiz[47].correct_answer = 'A';

    strcpy(quiz[48].question, "What is the default return type of a function in C?");
    strcpy(quiz[48].answerA, "int");
    strcpy(quiz[48].answerB, "void");
    strcpy(quiz[48].answerC, "char");
    strcpy(quiz[48].answerD, "float");
    quiz[48].correct_answer = 'A';

    strcpy(quiz[49].question, "What is the purpose of the break statement?");
    strcpy(quiz[49].answerA, "Terminate a loop");
    strcpy(quiz[49].answerB, "Continue to the next iteration");
    strcpy(quiz[49].answerC, "End a program");
    strcpy(quiz[49].answerD, "None of the above");
    quiz[49].correct_answer = 'A';

    strcpy(quiz[50].question, "Which of the following is not a control structure in C?");
    strcpy(quiz[50].answerA, "if");
    strcpy(quiz[50].answerB, "else");
    strcpy(quiz[50].answerC, "for");
    strcpy(quiz[50].answerD, "print");
    quiz[50].correct_answer = 'D';

    strcpy(quiz[51].question, "What is the purpose of the continue statement?");
    strcpy(quiz[51].answerA, "Skip the current iteration");
    strcpy(quiz[51].answerB, "Terminate a loop");
    strcpy(quiz[51].answerC, "Exit the program");
    strcpy(quiz[51].answerD, "None of the above");
    quiz[51].correct_answer = 'A';

    strcpy(quiz[52].question, "What is the output of printf(\"%d\", (5 > 2) && (3 > 1));?");
    strcpy(quiz[52].answerA, "1");
    strcpy(quiz[52].answerB, "0");
    strcpy(quiz[52].answerC, "5");
    strcpy(quiz[52].answerD, "Error");
    quiz[52].correct_answer = 'A';

    strcpy(quiz[53].question, "Which of the following is a correct way to define a constant in C?");
    strcpy(quiz[53].answerA, "const int x = 10;");
    strcpy(quiz[53].answerB, "#define x 10");
    strcpy(quiz[53].answerC, "define x = 10;");
    strcpy(quiz[53].answerD, "int const x;");
    quiz[53].correct_answer = 'A';

    strcpy(quiz[54].question, "Which of the following is the proper way to declare a struct?");
    strcpy(quiz[54].answerA, "struct Person {};");
    strcpy(quiz[54].answerB, "struct Person;");
    strcpy(quiz[54].answerC, "Person struct {};");
    strcpy(quiz[54].answerD, "struct { Person }");
    quiz[54].correct_answer = 'A';

    strcpy(quiz[55].question, "What is the correct way to call a function named 'myFunction'?");
    strcpy(quiz[55].answerA, "myFunction();");
    strcpy(quiz[55].answerB, "call myFunction();");
    strcpy(quiz[55].answerC, "myFunction[];");
    strcpy(quiz[55].answerD, "myFunction{};");
    quiz[55].correct_answer = 'A';

    strcpy(quiz[56].question, "Which of the following correctly allocates memory for an integer?");
    strcpy(quiz[56].answerA, "int *p = malloc(sizeof(int));");
    strcpy(quiz[56].answerB, "int *p = allocate(int);");
    strcpy(quiz[56].answerC, "int p = malloc(int);");
    strcpy(quiz[56].answerD, "int *p = new int;");
    quiz[56].correct_answer = 'A';

    strcpy(quiz[57].question, "What is the size of a char in C?");
    strcpy(quiz[57].answerA, "1 byte");
    strcpy(quiz[57].answerB, "2 bytes");
    strcpy(quiz[57].answerC, "4 bytes");
    strcpy(quiz[57].answerD, "8 bytes");
    quiz[57].correct_answer = 'A';

    strcpy(quiz[58].question, "Which of the following is used to terminate a string in C?");
    strcpy(quiz[58].answerA, "NULL");
    strcpy(quiz[58].answerB, "END");
    strcpy(quiz[58].answerC, "0");
    strcpy(quiz[58].answerD, "None of the above");
    quiz[58].correct_answer = 'A';

    strcpy(quiz[59].question, "Which of the following is a valid way to declare an array of integers?");
    strcpy(quiz[59].answerA, "int arr[10];");
    strcpy(quiz[59].answerB, "int arr(10);");
    strcpy(quiz[59].answerC, "int arr{10};");
    strcpy(quiz[59].answerD, "array int arr[10];");
    quiz[59].correct_answer = 'A';

    strcpy(quiz[60].question, "Which of the following is the proper way to use a pointer to a function?");
    strcpy(quiz[60].answerA, "void (*p)() = myFunction;");
    strcpy(quiz[60].answerB, "void p() = myFunction;");
    strcpy(quiz[60].answerC, "p = myFunction();");
    strcpy(quiz[60].answerD, "function p() = myFunction;");
    quiz[60].correct_answer = 'A';

    strcpy(quiz[61].question, "What does the sizeof operator return?");
    strcpy(quiz[61].answerA, "Size in bytes");
    strcpy(quiz[61].answerB, "Size in kilobytes");
    strcpy(quiz[61].answerC, "Size in bits");
    strcpy(quiz[61].answerD, "None of the above");
    quiz[61].correct_answer = 'A';

    strcpy(quiz[62].question, "Which of the following is the correct way to declare a union?");
    strcpy(quiz[62].answerA, "union U {};");
    strcpy(quiz[62].answerB, "struct U {};");
    strcpy(quiz[62].answerC, "union {};");
    strcpy(quiz[62].answerD, "U union {};");
    quiz[62].correct_answer = 'A';

    strcpy(quiz[63].question, "What is the correct way to create a multi-dimensional array?");
    strcpy(quiz[63].answerA, "int arr[3][4];");
    strcpy(quiz[63].answerB, "int arr(3)(4);");
    strcpy(quiz[63].answerC, "int arr{3,4};");
    strcpy(quiz[63].answerD, "int arr[3,4];");
    quiz[63].correct_answer = 'A';

    strcpy(quiz[64].question, "What does the 'extern' keyword do?");
    strcpy(quiz[64].answerA, "Declares a variable");
    strcpy(quiz[64].answerB, "Defines a variable");
    strcpy(quiz[64].answerC, "Links to a variable");
    strcpy(quiz[64].answerD, "None of the above");
    quiz[64].correct_answer = 'A';

    strcpy(quiz[65].question, "What is the output of printf(\"%d\", 5 || 0);?");
    strcpy(quiz[65].answerA, "1");
    strcpy(quiz[65].answerB, "0");
    strcpy(quiz[65].answerC, "5");
    strcpy(quiz[65].answerD, "Error");
    quiz[65].correct_answer = 'A';

    strcpy(quiz[66].question, "Which of the following is a valid way to check if a pointer is NULL?");
    strcpy(quiz[66].answerA, "if(p == NULL)");
    strcpy(quiz[66].answerB, "if(p = NULL)");
    strcpy(quiz[66].answerC, "if(p != NULL)");
    strcpy(quiz[66].answerD, "if(NULL == p)");
    quiz[66].correct_answer = 'A';

    strcpy(quiz[67].question, "What is the purpose of the static keyword in C?");
    strcpy(quiz[67].answerA, "To restrict variable scope");
    strcpy(quiz[67].answerB, "To allocate static memory");
    strcpy(quiz[67].answerC, "To declare a constant");
    strcpy(quiz[67].answerD, "None of the above");
    quiz[67].correct_answer = 'A';

    strcpy(quiz[68].question, "Which of the following can be a return type of a function?");
    strcpy(quiz[68].answerA, "int");
    strcpy(quiz[68].answerB, "void");
    strcpy(quiz[68].answerC, "float");
    strcpy(quiz[68].answerD, "All of the above");
    quiz[68].correct_answer = 'D';

    strcpy(quiz[69].question, "What does the malloc function return?");
    strcpy(quiz[69].answerA, "Pointer to allocated memory");
    strcpy(quiz[69].answerB, "Size of allocated memory");
    strcpy(quiz[69].answerC, "NULL");
    strcpy(quiz[69].answerD, "None of the above");
    quiz[69].correct_answer = 'A';

    strcpy(quiz[70].question, "Which of the following is the correct way to free allocated memory?");
    strcpy(quiz[70].answerA, "free(p);");
    strcpy(quiz[70].answerB, "delete p;");
    strcpy(quiz[70].answerC, "dispose(p);");
    strcpy(quiz[70].answerD, "release(p);");
    quiz[70].correct_answer = 'A';

    strcpy(quiz[71].question, "What is the function of the 'void' keyword in C?");
    strcpy(quiz[71].answerA, "Indicates no value");
    strcpy(quiz[71].answerB, "Indicates a pointer type");
    strcpy(quiz[71].answerC, "Indicates a return type");
    strcpy(quiz[71].answerD, "None of the above");
    quiz[71].correct_answer = 'A';

    strcpy(quiz[72].question, "Which of the following is a proper way to define a macro?");
    strcpy(quiz[72].answerA, "#define MAX 100");
    strcpy(quiz[72].answerB, "define MAX 100");
    strcpy(quiz[72].answerC, "macro MAX 100");
    strcpy(quiz[72].answerD, "const MAX = 100");
    quiz[72].correct_answer = 'A';

    strcpy(quiz[73].question, "What is the purpose of the return statement?");
    strcpy(quiz[73].answerA, "Exit a function");
    strcpy(quiz[73].answerB, "Terminate the program");
    strcpy(quiz[73].answerC, "Return a value");
    strcpy(quiz[73].answerD, "Both A and C");
    quiz[73].correct_answer = 'D';

    strcpy(quiz[74].question, "Which of the following is a valid way to comment in C?");
    strcpy(quiz[74].answerA, "// This is a comment");
    strcpy(quiz[74].answerB, "/* This is a comment */");
    strcpy(quiz[74].answerC, "// This is a comment /* inside */");
    strcpy(quiz[74].answerD, "All of the above");
    quiz[74].correct_answer = 'D';

    strcpy(quiz[75].question, "Which of the following is true about pointers?");
    strcpy(quiz[75].answerA, "They store memory addresses");
    strcpy(quiz[75].answerB, "They can be NULL");
    strcpy(quiz[75].answerC, "They can point to any data type");
    strcpy(quiz[75].answerD, "All of the above");
    quiz[75].correct_answer = 'D';

    strcpy(quiz[76].question, "What is the purpose of the sizeof operator?");
    strcpy(quiz[76].answerA, "Get the size of a variable");
    strcpy(quiz[76].answerB, "Get the size of a type");
    strcpy(quiz[76].answerC, "Both A and B");
    strcpy(quiz[76].answerD, "None of the above");
    quiz[76].correct_answer = 'C';

    strcpy(quiz[77].question, "Which of the following is not a valid pointer type?");
    strcpy(quiz[77].answerA, "int*");
    strcpy(quiz[77].answerB, "char**");
    strcpy(quiz[77].answerC, "float*[]");
    strcpy(quiz[77].answerD, "string*");
    quiz[77].correct_answer = 'D';

    strcpy(quiz[78].question, "What is the purpose of the volatile keyword?");
    strcpy(quiz[78].answerA, "Prevent compiler optimization");
    strcpy(quiz[78].answerB, "Declare a global variable");
    strcpy(quiz[78].answerC, "Define a constant");
    strcpy(quiz[78].answerD, "None of the above");
    quiz[78].correct_answer = 'A';

    strcpy(quiz[79].question, "Which of the following is used for memory allocation in C?");
    strcpy(quiz[79].answerA, "malloc()");
    strcpy(quiz[79].answerB, "calloc()");
    strcpy(quiz[79].answerC, "realloc()");
    strcpy(quiz[79].answerD, "All of the above");
    quiz[79].correct_answer = 'D';

    strcpy(quiz[80].question, "Which of the following is not a valid identifier in C?");
    strcpy(quiz[80].answerA, "_var");
    strcpy(quiz[80].answerB, "1var");
    strcpy(quiz[80].answerC, "var1");
    strcpy(quiz[80].answerD, "var_1");
    quiz[80].correct_answer = 'B';

    strcpy(quiz[81].question, "What is the output of printf(\"%d\", (5 == 5) ? 1 : 0);?");
    strcpy(quiz[81].answerA, "1");
    strcpy(quiz[81].answerB, "0");
    strcpy(quiz[81].answerC, "Error");
    strcpy(quiz[81].answerD, "None of the above");
    quiz[81].correct_answer = 'A';

    strcpy(quiz[82].question, "Which of the following statements is correct?");
    strcpy(quiz[82].answerA, "int x = 5;");
    strcpy(quiz[82].answerB, "int x = ;");
    strcpy(quiz[82].answerC, "int x : 5;");
    strcpy(quiz[82].answerD, "int x = 5");
    quiz[82].correct_answer = 'A';

    strcpy(quiz[83].question, "What is the purpose of the static keyword in C?");
    strcpy(quiz[83].answerA, "Restrict variable scope");
    strcpy(quiz[83].answerB, "Declare a global variable");
    strcpy(quiz[83].answerC, "Define a constant");
    strcpy(quiz[83].answerD, "None of the above");
    quiz[83].correct_answer = 'A';

    strcpy(quiz[84].question, "What does the printf function return?");
    strcpy(quiz[84].answerA, "The number of characters printed");
    strcpy(quiz[84].answerB, "A pointer to the printed string");
    strcpy(quiz[84].answerC, "The output itself");
    strcpy(quiz[84].answerD, "None of the above");
    quiz[84].correct_answer = 'A';

    strcpy(quiz[85].question, "Which of the following is the correct way to declare a constant?");
    strcpy(quiz[85].answerA, "const int x = 10;");
    strcpy(quiz[85].answerB, "define x = 10;");
    strcpy(quiz[85].answerC, "int const x;");
    strcpy(quiz[85].answerD, "All of the above");
    quiz[85].correct_answer = 'A';

    strcpy(quiz[86].question, "What is the result of the expression (10 + 2) * 3?");
    strcpy(quiz[86].answerA, "36");
    strcpy(quiz[86].answerB, "30");
    strcpy(quiz[86].answerC, "12");
    strcpy(quiz[86].answerD, "None of the above");
    quiz[86].correct_answer = 'B';

    strcpy(quiz[87].question, "Which of the following is a valid declaration of a string in C?");
    strcpy(quiz[87].answerA, "char str[10];");
    strcpy(quiz[87].answerB, "string str;");
    strcpy(quiz[87].answerC, "char str[];");
    strcpy(quiz[87].answerD, "Both A and C");
    quiz[87].correct_answer = 'D';

    strcpy(quiz[88].question, "What is the purpose of the sizeof operator?");
    strcpy(quiz[88].answerA, "To determine the size of a variable");
    strcpy(quiz[88].answerB, "To allocate memory");
    strcpy(quiz[88].answerC, "To get the size of an array");
    strcpy(quiz[88].answerD, "All of the above");
    quiz[88].correct_answer = 'D';

    strcpy(quiz[89].question, "Which of the following is a valid C string?");
    strcpy(quiz[89].answerA, "\"Hello, World!\"");
    strcpy(quiz[89].answerB, "'Hello, World!'");
    strcpy(quiz[89].answerC, "Hello, World!");
    strcpy(quiz[89].answerD, "None of the above");
    quiz[89].correct_answer = 'A';

    strcpy(quiz[90].question, "What is the correct way to include a header file in C?");
    strcpy(quiz[90].answerA, "#include <header.h>");
    strcpy(quiz[90].answerB, "#import <header.h>");
    strcpy(quiz[90].answerC, "include <header.h>");
    strcpy(quiz[90].answerD, "#include header.h");
    quiz[90].correct_answer = 'A';

    strcpy(quiz[91].question, "Which of the following is true about a pointer?");
    strcpy(quiz[91].answerA, "It stores the address of a variable");
    strcpy(quiz[91].answerB, "It can be dereferenced to access the value");
    strcpy(quiz[91].answerC, "It can be NULL");
    strcpy(quiz[91].answerD, "All of the above");
    quiz[91].correct_answer = 'D';

    strcpy(quiz[92].question, "What is the purpose of the return statement in C?");
    strcpy(quiz[92].answerA, "To exit a function");
    strcpy(quiz[92].answerB, "To return a value");
    strcpy(quiz[92].answerC, "To terminate the program");
    strcpy(quiz[92].answerD, "Both A and B");
    quiz[92].correct_answer = 'D';

    strcpy(quiz[93].question, "Which of the following is not a valid C type?");
    strcpy(quiz[93].answerA, "int");
    strcpy(quiz[93].answerB, "float");
    strcpy(quiz[93].answerC, "string");
    strcpy(quiz[93].answerD, "double");
    quiz[93].correct_answer = 'C';

    strcpy(quiz[94].question, "What is the result of the expression 10 % 3?");
    strcpy(quiz[94].answerA, "3");
    strcpy(quiz[94].answerB, "1");
    strcpy(quiz[94].answerC, "0");
    strcpy(quiz[94].answerD, "None of the above");
    quiz[94].correct_answer = 'B';

    strcpy(quiz[95].question, "What is the output of printf(\"%d\", 4 * 5 + 6 / 3);?");
    strcpy(quiz[95].answerA, "20");
    strcpy(quiz[95].answerB, "22");
    strcpy(quiz[95].answerC, "24");
    strcpy(quiz[95].answerD, "None of the above");
    quiz[95].correct_answer = 'B';

    strcpy(quiz[96].question, "Which of the following is the correct way to declare a pointer?");
    strcpy(quiz[96].answerA, "int *ptr;");
    strcpy(quiz[96].answerB, "int ptr*;");
    strcpy(quiz[96].answerC, "int * ptr;");
    strcpy(quiz[96].answerD, "Both A and C");
    quiz[96].correct_answer = 'D';

    strcpy(quiz[97].question, "What is the purpose of the 'break' statement?");
    strcpy(quiz[97].answerA, "To exit a loop");
    strcpy(quiz[97].answerB, "To skip to the next iteration");
    strcpy(quiz[97].answerC, "To return from a function");
    strcpy(quiz[97].answerD, "None of the above");
    quiz[97].correct_answer = 'A';

    strcpy(quiz[98].question, "What is the result of the expression 2 * (3 + 4);?");
    strcpy(quiz[98].answerA, "10");
    strcpy(quiz[98].answerB, "14");
    strcpy(quiz[98].answerC, "7");
    strcpy(quiz[98].answerD, "None of the above");
    quiz[98].correct_answer = 'A';

    strcpy(quiz[99].question, "Which of the following is the correct way to declare an enum?");
    strcpy(quiz[99].answerA, "enum Color { RED, GREEN, BLUE };");
    strcpy(quiz[99].answerB, "enum { RED, GREEN, BLUE };");
    strcpy(quiz[99].answerC, "Color enum { RED, GREEN, BLUE };");
    strcpy(quiz[99].answerD, "enum Color RED, GREEN, BLUE;");
    quiz[99].correct_answer = 'A';

    // Ask user how many questions want to solve
    int question_to_ask;
    printf("How many questions would you like to answer? (1 to %d): ", TOTAL_QUESTION);
    scanf("%d", &question_to_ask);

    if (question_to_ask < 1 || question_to_ask > TOTAL_QUESTION) {
        printf("Invalid input. You must choose between 1 and %d.\n", TOTAL_QUESTION);
        return 1;
    }

    int indices[TOTAL_QUESTION];
    for (int i = 0; i < TOTAL_QUESTION; i++) {
        indices[i] = i; 
    }

    shuffle(indices, TOTAL_QUESTION);

    double total_correct = 0;
    char answer;

    for (int i = 0; i < question_to_ask; i++) {
        int q_index = indices[i];

        printf("Question %d: %s\n\n", (i + 1), quiz[q_index].question);
        printf("A) %s\n", quiz[q_index].answerA);
        printf("B) %s\n", quiz[q_index].answerB);
        printf("C) %s\n", quiz[q_index].answerC);
        printf("D) %s\n", quiz[q_index].answerD);

        printf("\nEnter Answer (A, B, C, or D): ");
        scanf(" %c", &answer);

        if (toupper(answer) == quiz[q_index].correct_answer) {
            total_correct++;
            printf("\nCorrect Answer!\n");
        } else {
            printf("\nIncorrect Answer!");
            printf("\nThe correct answer was %c.\n", quiz[q_index].correct_answer);
        }

        printf("\n\n");
    }
    // Display total score
    printf("You answered %d/%d questions correctly.\n", (int)total_correct, question_to_ask);
    printf("(%.2f%%)\n", (total_correct / question_to_ask) * 100);
    break;}
    case 2:
    {
        exit(1);
    }
    default:
    printf("invalid choice ");}
    }
    return 0;
}
