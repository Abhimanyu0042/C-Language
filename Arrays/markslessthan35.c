#include <stdio.h>

int main(){
    int marks[10] = {94,65,77,23,34,76,12,95,90,82};

    for(int i = 0;i<10;i++){
        if (marks[i] < 35)
        {
            printf("%d\n",i);
        }
    }
}