#include <stdio.h>
int main(){
    int a = 0;
    // printf("The value of a++ %d\n",a++);
    // printf("The value of ++a %d\n",++a);
    int b = 20;
    printf("%lf\n",printf("%lf",1234));
    printf("%f\n",printf("%f",1234));
    printf("%d\n",printf("%d",012345)); //prints octal number
    printf("%d\n",printf("%d",12345)); //other %d prints size
    printf("%c\n",printf("%c",'a'));
    
    //Logical operators
    printf("%d\n",!(a||b));
    printf("%d\n",!(a&&b));
    printf("%d\n",(a&&b));
    printf("%d\n",(a||b));

}