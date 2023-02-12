#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int x, n;
    printf("Enter the number : \n");
    scanf("%d", &x);
    int f = 1;
    while (n != 4)
    {
        printf("Enter the case to be followed : ");
        scanf("%d", &n);
        int flag = 0, i;
        switch (n)
        {
        case 1:
            // Factorial number
            for (int i = 1; i <= x; i++)
            {
                f = f * i;
            }
            printf("The factorial of %d is %d.\n", x, f);
            break;

        case 2:

            if (x == 0 || x == 1)
            {
                flag = 1;
            }
            for (i = 2; i <= x / 2; ++i)
            {
                if (x % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
                printf("%d is a Prime Number\n", x);}
            else{
                printf("%d is not a Prime Number\n", x);}
            

            case 3:
            if(x%2 == 0){
                printf("The %d is even.\n",x);
            }
            else{
                printf("The %d is odd.\n",x);
            }

            case 4:
            break;
        }

    }
}
