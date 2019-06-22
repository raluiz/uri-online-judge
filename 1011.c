#include <stdio.h>
#include <stdlib.h>

int main() {
	//Create a double variable.
	double r;
	
	//Read a value.
	scanf("%lf", &r);
	
	//Print VOLUME = <(4/3 * 3.14159 * r * r * r)>.
	printf("VOLUME = %.3f\n", ((4.0/3) * 3.14159 * r * r * r));
	
	return 0;
}
