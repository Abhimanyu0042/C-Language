#include<stdio.h>

int main() {
    int i=0, w=850, h=1200, t;
    printf("A%d: %d X %d \n",i,h,w);
    for (i=1;i<9;i++) {
        h/=2;
        if (h<w) {
            t = h;
            h = w;
            w = t;
        }
        printf("A%d: %d X %d \n",i,h,w);
    }
}