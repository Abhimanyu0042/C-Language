#include <stdio.h> 
#include <string.h>
    typedef struct employee{
        char name[50];
        int salary;
    }st;

int main(){

    st e1;  
    strcpy(e1.name,"Abhimanyu");
    e1.salary = 20,000,000;
    printf("%s\n",e1.name);
    printf("%d\n",e1.salary);
}