#include <stdio.h>

int main()
{
    // int sum;
    // scanf("%d", &sum);
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    // for(int i =0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    int arr[8] = {1,2,3,4,5,6,7,8};
    int sum = 12;
    int totaltriplets = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            for (int k = j + 1; k < 8; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    totaltriplets = totaltriplets + 1;
                    printf("%d %d %d\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("%d",totaltriplets);
    return 0;
}