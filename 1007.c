#include <stdio.h>
#include <stdlib.h>

int main() {
        //Create four integers.
	int a, b, c, d;
	
        //Read a value for each integer.
	scanf("%d\n%d\n%d\n%d\n", &a, &b, &c, &d);
	
        //Print DIFERENCA = <a * b - c * d>.
	printf("DIFERENCA = %d\n", a*b - c*d);
    
	return 0;
}
