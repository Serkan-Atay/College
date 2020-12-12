#include <stdio.h>
#include <math.h>

int main() {
    float flaeche;
    
    printf("Geben Sie die Flaeche des Kreises an: ");
    scanf("%f", &flaeche);
    
    float durchmesser = sqrtf((flaeche / M_PI))*2;
    printf("Der Durchmesser betraegt %.3f\n", durchmesser);
    
    return(0);
}
