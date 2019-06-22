#include <stdio.h>
#include <stdlib.h>

int main() {
	//Create two variables.
	double a, b;
	
	//Read a value for each variable.
	scanf("%lf %lf", &a, &b);
	
	//Print MEDIA = <(a * 3.5 + b * 7.5) / (3.5 + 7.5)>.
	//3.5 and 7.5 are weights for the students grades.
	printf("MEDIA = %.5lf\n", (a * 3.5 + b * 7.5)/(3.5 + 7.5));
  
	return 0;
}
