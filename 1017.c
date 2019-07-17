#include <stdio.h>
#include <stdlib.h>

int main() {
	//Create two integers.
	int h, s;
	
	//Read two values.
	scanf("%d \n %d", &h, &s);
	
	//Print <(h * s) / 12>.
	printf("%.3f\n", (h * s) / 12.0);
	
	return 0;
}
