//Structure is a user defined data type
#include <stdio.h>
int main(){
    struct pokemon //user defined datatype
{
    int hp;
    int atk;
    int speed;
};

struct book{
    char name[50];
    float price;
    int pages;
}
 struct pokemon Pikachu;
 Pikachu.atk = 80;
 Pikachu.hp = 50;
 Pikachu.speed = 100;

 printf("%d\n",Pikachu.hp);

 struct pokemon Charizard;
 Charizard.atk = 90;
 Charizard.hp = 80;
 Charizard.speed = 150;
 printf("%d",Charizard.atk);

 struct pokemon togepi;
 togepi.atk = 30;
 togepi.hp = 70;
 togepi.speed = 120;
 return 0; 
 


}