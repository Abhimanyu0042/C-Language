#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter the sides : \n");
    scanf("%d%d%d", &a,&b,&c);
    if (a==b && b==c && c==a) {
        printf("Its an equilateral triangle.\n");
    }
    else if ((a==b && a!=c && b!=c)||(b==c && b!=a && c!=a)||(c==a && b!=c && b!=a)) {
        printf("Its an Isosceles Triangle.\n");
    }
    else if ((pow(a,2) == pow(b,2)+pow(c,2))||(pow(b,2) == pow(a,2)+pow(c,2))||(pow(c,2) == pow(a,2)+pow(b,2))) {
        printf("Its a Right angled triangle.\n");
    }
    else {
        printf("Its an scalene Triangle.\n");
    }
}
