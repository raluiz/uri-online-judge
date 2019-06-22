#include <stdio.h>
#include <stdlib.h>

int main() {
	//Create a double variable.
	double r;
	
	//Read a value.
	scanf("%lf", &r);
	
	//Print A=<3.14159 * r * r>.
	printf("A=%.4lf\n", (3.14159 * r * r)); 
	
	return 0;
}
