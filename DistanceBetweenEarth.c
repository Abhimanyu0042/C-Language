#include <stdio.h>
#include <math.h>

int main(){
    double L1, L2, G1, G2, D;

    printf("Enter value of latitudes (L1,L2) in degrees: ");
    scanf("%lf%lf", &L1, &L2 );

    printf("Enter value of longitudes (G1,G2) in degrees: ");
    scanf("%lf%lf", &G1, &G2 );

    D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G1 - G2));

    printf("Distance between the two places : %lf nautical miles", D);

    return 0;
    
}