#include <stdio.h>
#include <stdlib.h>

int main() {
    //Create one integer and one float.
    int x;
    float y;
    
    //Read a value for each value.
    scanf("%d %f", &x, &y);
    
    //Print <x / y> km/l
    printf("%.3f km/l\n", x / y);
    
    return 0;
}
