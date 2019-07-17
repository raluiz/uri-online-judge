#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	//Create four float variables.
	float x1, x2, y1, y2;
	
	//Read a value for each variable.
	scanf("%f %f \n %f %f", &x1, &y1, &x2, &y2);
	
	//Print <sqrt(pow((x2-x1), 2) + pow((y2-y1), 2))>;
	printf("%.4f\n", sqrt(pow((x2-x1), 2) + pow((y2-y1), 2)));
	
	return 0;
}
