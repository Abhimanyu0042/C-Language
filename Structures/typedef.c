#include<stdio.h>
typedef float realno; // typedef oldName NewName

int main(){
    typedef struct bookstructure
    {
        char name[50];
        int noofpages;
        float price;
    }PW;

    PW a;
    PW b;
    PW c;
    
    realno x = 23.0633;
    printf("%f",x);

    return 0;
}