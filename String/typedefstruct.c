#include <stdio.h>

typedef struct structA_tag{
    char a;
    short int b;
}structA_t;

typedef struct B_tag{
    short int b;
    char a;
    int c;
}structB_t;

typedef struct C_tag
{
    char a;
    double d;
    int c;
}structC_t;

typedef struct D_tag
{
    double d;
    int c;
    char a;
}structD_t;

int main(){
    printf("%lu\n",sizeof(structA_t));
    printf("%lu\n",sizeof(structB_t));
    printf("%lu\n",sizeof(structC_t));
    printf("%lu\n",sizeof(structD_t));
}