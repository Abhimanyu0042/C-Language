#include <stdio.h>
 
int main() {
    int balls = 6;
    int score = 0;
    int i=1;
    int wide_ball = 0;
    int tot_balls = 0;
    while (balls > 0) {
        int ball;
        printf("Enter ball %d : ",i);
        scanf("%d",&ball);
        if (ball == -1) {
            score--;
            wide_ball++;
            tot_balls++;
        }
        else {
            score += ball;
            tot_balls++;
            balls--;
            i++;
        }
    }
    printf("%d\n",score);                     
    printf("Total balls are %d\n",tot_balls);
    printf("Total %d wide balls.\n",wide_ball);

}