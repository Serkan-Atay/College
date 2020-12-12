#include <stdio.h>

int main() {
    int x = 1;
    int y = 2;
    
    x += 5;
    y += x;
    
    printf("x ist %d und y ist %d\n", x, y);
    
    return(0);
}
