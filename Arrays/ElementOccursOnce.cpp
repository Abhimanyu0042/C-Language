#include <iostream>
using namespace std;

int main(){
    int arr[7] = {3,3,7,7,10,11,11};
    // for(int i = 0,j = i+1;i<7,j<i+2;i=i+2,j=j+2){
    //     if(arr[i] != arr[j]){
    //         cout<<arr[i];
    //         break;
    //     }

    // }
            for(int i = 0;i<7;i=i+2){
            if(arr[i] != arr[i+1]){
                cout<<arr[i];
                break;
            }
        }
}