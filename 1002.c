#include <stdio.h>
#include <stdlib.h>

int main() {
	//Create a double variable.
	double r;
	
	//Read a value.
	scanf("%lf", &r);
	
	//Print the area of a circle using pi = 3.14159.
	printf("A=%.4lf\n", (3.14159 * r * r)); 
	
	return 0;
}
