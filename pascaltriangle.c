#include <stdio.h>

int factorial(int x){
    int fact = 1;
    for(int i = 1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}

int combfact(int n, int r){
    int ncr;
    ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr; 
}

int main(){
    int b = 5;

    for(int i = 0;i<=b;i++){
        for(int j = 0;j<=i;j++){
            printf("%d ",combfact(i,j));
        }
        printf("\n");
    }
    return 0;
}