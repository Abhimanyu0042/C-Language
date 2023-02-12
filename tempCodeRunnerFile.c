#include <stdio.h>
#include <math.h>

int main()
{
    int i = 8;
    int j = 7;
    j+= i*(i%2)+1;
    printf("%d",j);
}
