#include <stdio.h>

char pattern1(int n){
    int i, j;
    int ch = 65;
    for(i = 0; i<n; i++){
        for(j = -1; j<i;j++){
            printf("%c",ch);
        }
        printf("\n");
        ch++;
    } 
}

char pattern2(int n){
    int i, j;
    int ch = 42;
    for(i = 0; i<n; i++){
        for(j = 1; j<i;j++){
            printf("%c",ch);
        }
        printf("\n");      
    }
        for(i = 0; i<n; i++){
        for(j = 0; j<n - i - 3;j++){
            printf("%c",ch);
        }
        printf("\n");      
    }
}
 char pattern3(int n){
    int i,j;
    int ch = 69;
    for(i = 0; i<n;i++){
        for(j = 0; j<i+1;j++){
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
 }

int main(){
    pattern1(3);
    printf("\n");
    pattern2(5);
    pattern3(5);
    
}