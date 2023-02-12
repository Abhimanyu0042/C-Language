#include<stdio.h>

int main(){
    int a,b,temp;
    printf("Enter the first element \n");
    scanf("%d",&a);
    printf("Enter the second element \n");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d\n",a);
    printf("b = %d\n",b);

}