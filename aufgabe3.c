#include <stdio.h>
#include <math.h>

int main () {
    float hoehe;
    float radius;
    
    printf("Geben Sie die Hoehe des Zylinders an: ");
    scanf("%f", &hoehe);
    
    printf("Geben Sie den Radius des Zylinders an: ");
    scanf("%f", &radius);
    
    printf("Das Volumen des Zylinders ist: %.3f\n", M_PI * hoehe * radius * radius);
    
    return(0);
}
