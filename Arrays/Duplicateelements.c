#include <stdio.h>

int main(){
    int arr[7] = {1,2,3,9,4,3,6};

    for(int i = 0;i<7;i++){
        for(int j = i + 1;j<7;j++){
            if(arr[i] == arr[j]){
                printf("%d at index %d has a duplicate number at index %d.",arr[i],i,j);
                break;
            }
        }
    }
    return 0;
}