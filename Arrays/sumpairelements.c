#include <stdio.h>

int main(){
    int sum;
    scanf("%d",&sum);
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    // for(int i =0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    int arr[10] = {12,14,5,6,7,2,9,18,3,1};
    for(int i = 0;i<10;i++){
        for(int j = i + 1;j<10;j++){
            int x = 0;
            x = arr[i] + arr[j];
            if(x == sum){
                printf("%d %d\n",i,j);
            }   
        }
    }
}