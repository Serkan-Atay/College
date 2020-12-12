/* Implementierung nach AlgDat Skript - Algorithmus 2.3 */

void insertion_sort(unsigned int anzahl, double* zahlen) {
    double key;
    unsigned int i, j;
    
    for (j = 1; j < anzahl; j++) {
        key = zahlen[j];
        i = j-1;
        while (i >= 0 && zahlen[i] > key) {
            zahlen[i+1] = zahlen[i];
            i--;
        }
        zahlen[i+1] = key;
    }
}
