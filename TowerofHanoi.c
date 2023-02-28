#include <stdio.h>
void hanoi(int n, char rodFrom, char rodnotused, char rodto){
    if(n==1){
        printf("1 Disk moved from %c to %c\n ",rodFrom, rodto);
        return;
    }
    hanoi(n-1,rodFrom,rodto,rodnotused);
    printf("%d Disk moved from %c to %c\n ",n,rodFrom, rodto);
    hanoi(n-1,rodnotused,rodFrom,rodto);

}
 int main(){
    hanoi(3,'A','B','C');
    return 0;

  }  