#include <stdio.h>


int main(){
    int i = 0;// here the value of i = 0
    int *j = &i;// j points on the address of i
    if(i == 0){
        printf("%d %u\n",i,j); // here i prints 0 and j prints address of i as it is pointing
        int i = 1;
        j = &i;// here j is equal to the address of i in which value of i is 1 
        if(i == 1){//as i == 1 the process will continue
            printf("%d %u\n",i,j);//here i will be printed as 1 and adress of i will be printed as j is equal to adress of i  
            int i = 2;
            j = &i;
            if(i == 2){
                printf("%d %u\n",i,j);//same procedure
            }
        }
    }
    printf("%d %u",*j,j);//as j is equal to address of i and j pointer access the value of address stored in i
}     