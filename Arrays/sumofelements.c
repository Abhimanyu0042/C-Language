#include <stdio.h>

int main(){
    int arr[10] = {2,14,11,5,4,5,7,9,8,1};

    int sum = 0;
    for(int i = 0;i<10;i++){
        sum = sum + arr[i];
    }
    printf("%d\n",sum);
}