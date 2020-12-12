#include <stdlib.h>
#include <stdio.h>
int i;

void vektoreingabe(double *v, int dimension) {
    for (i = 0; i < dimension; i++) {
        printf("Komponente %u: ", i);
        scanf("%lf", &v[i]);
    }
}

double skalarprodukt(double *v1, double *v2, int dimension) {
    double ergebnis = 0;
    for (i = 0; i < dimension; i++) {
        ergebnis = ergebnis + (v1[i] * v2[i]);
    }
    return ergebnis;
}

int main() {
    unsigned int dimension;
    printf("Die Dimension der Vektoren eingeben: ");
    scanf("%d", &dimension);
    
    double *v1, *v2;
    v1 = malloc(sizeof(double) * dimension);
    v2 = malloc(sizeof(double) * dimension);
    
    printf("Die Komponenten des ersten Vektors eingeben\n");
    vektoreingabe(v1, dimension);
    printf("Die Komponenten des zweiten Vektors eingeben\n");
    vektoreingabe(v2, dimension);
    
    double ergebnis = skalarprodukt(v1, v2, dimension);
    printf("\nSkalarprodukt: %.2lf\n", ergebnis);
    
    free(v1);
    free(v2);
    
    return 0;
}
