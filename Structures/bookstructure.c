#include <stdio.h>
#include <string.h>

int main(){
    struct bookstructure
    {
        char name[50];
        int noofpages;
        float price;
    }a,b,c;

    a.noofpages = 100;
    a.price = 411.5;
   // a.name = "Secret Seven"; //we can't declare it like this
//    a.name[0] = 's';
//    a.name[1] = 'e';
//    a.name[2] = 'v';
//    a.name[3] = 'e'; 
//    a.name[4] = 'n';
   strcpy(a.name,"Secret Seven");// we can use strcpy to copy the string in the array
   printf("%s",a.name);
}