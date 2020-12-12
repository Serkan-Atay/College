#include <stdio.h>

int main() {
    int x = 1;
    int y = 3;
    
    ++x;
    y -= x;
    --y;
    
    printf("x ist %d und y ist %d\n", x, y);
    
    return(0);
}
