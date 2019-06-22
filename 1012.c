#include <stdio.h>
#include <stdlib.h>

int main() {
	//Create three float variables.
	float a, b, c;
	
	//Read a value for each variable.
	scanf("%f %f %f", &a, &b, &c);
	
	//Print TRIANGULO: <(a * c) / 2>.
	printf("TRIANGULO: %.3f\n", (a * c) / 2);
	
	//Print CIRCULO: <3,14159 * c * c>.
	printf("CIRCULO: %.3f\n", 3.14159 * c * c);
	
	//Print TRAPEZIO: <(a + b) * c / 2>.
	printf("TRAPEZIO: %.3f\n", (a + b) * c / 2);
	
	//Print QUADRADO: <b * b>.
	printf("QUADRADO: %.3f\n", b * b);
	
	//Print RETANGULO: <a * b>.
	printf("RETANGULO: %.3f\n", a * b);
	
	return 0;
}
