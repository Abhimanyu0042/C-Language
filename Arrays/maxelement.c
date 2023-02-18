#include <stdio.h>
#include <limits.h>

int main(){
    int arr[10] = {-3,-5,-2,-14,-32,-8,-7,-4,-89,-6};
    // int max = arr[0];
    int max = INT_MIN;
    for(int i = 1;i<10;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
}