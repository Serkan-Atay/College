#include <stdio.h>

int main() {
    int tage;
    
    printf("Anzahl der Tage: ");
    scanf("%d", &tage);
    
    printf("%d Woche(n) und %d Tag(e)\n", tage / 7, tage % 7);
    
    return(0);
}
