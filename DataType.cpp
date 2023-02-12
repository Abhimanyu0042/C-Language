#include <stdio.h>
#include <conio.h>
//A token is the smallest element of a program, that is meaningful to the compiler.
//It can be classified as : 

//There are 32 keywords in C language.
//Identifiers - are standard anming conventions.
//Constants - having constant value.
//char a[8] = {C,H,I,T,K,A,R,A};
//All the variables must be declared before use.

int main(){
    int intType = 12;
    char charType;
    float floatType;
    double doubleType;

    printf("The size is %zu bytes \n", sizeof(intType));
    printf("The size is %zu bytes \n", sizeof(charType));
    printf("The size is %zu bytes \n", sizeof(floatType));
    printf("The size is %zu bytes \n", sizeof(doubleType));
}
//Variable naming : 
//we cant start a name of variable with number.
//it must not be a reserve word or keyword. 