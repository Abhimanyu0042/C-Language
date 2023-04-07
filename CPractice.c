#include <stdio.h> 
#include<string.h>

// enum color{Red = 5,Green = -1,Blue = 8};
union Data{int i; float f; char str[20];};

int main(){
    union Data data;
   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);
    // printf("%d %d %d",Red, green, blue);

}