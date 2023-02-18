#include <stdio.h>
#include <limits.h>

int main(){
    int arr[10] = {-3,-5,-2,-14,-32,-8,-7,-4,-89,-6};
    // int max = arr[0];
    int min = INT_MAX;
    for(int i = 1;i<10;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
}