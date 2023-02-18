#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // for(int i = 0;i<n;i++){
    //     brr[i] = arr[n-1-i];
    //     }
    // for(int i = 0;i<n;i++){
    //     printf("%d,",brr[i]);
    // }

    //without using two arrays
    // int i = 0;
    // int j = n-1;
    int temp;
    // while(i<j){
    //     temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }
    int isPalindrome;

    for(int i = 0,j = n-1;i<j;i++,j--){
        // temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = temp;
        if(arr[i] != arr[j]){
            printf("Number is not Palindrome.");
            break;
    }
    // for(int i = 0;i<n;i++){
    //   printf("%d,",arr[i]);
    // }
}
}