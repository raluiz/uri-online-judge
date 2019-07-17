#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	//Create three integers.
	int a, b, c;
	
	//Read a value for each variable.
	scanf("%d %d %d", &a, &b, &c);
	
	//Get the greatest value between two variables.
	int g = (a + b + abs(a-b)) / 2;
	
	//Print <greatest value> eh o maior.
	printf("%d eh o maior\n", (g + c + abs(g-c)) / 2);
	
	return 0;
}
