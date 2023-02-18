#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int prod = 1;
    for(int i = 0;i<n;i++){
        prod = prod * arr[i];
    }
    printf("%d",prod);
}   