#include <stdio.h>
#include <stdlib.h>

int main() {
        //Create three integers and two float variables.
 	int c, u, cont = 0;
	float v, t = 0;
	
        //This loop will be used to read two input lines.
        do {
                //Read the values given.
		scanf("%d %d %f", &c, &u, &v);
                
                //Add to a variable the value spent (units * value).
		t += u * v;
                
                //Add one to a counter.
		cont++;
	} while(cont < 2);
	
        //Print VALOR A PAGAR: R$ <t>.
	//.2 represents that only two digits will be shown after the decimal point.
	printf("VALOR A PAGAR: R$ %.2f\n", t);
	
	return 0;
}
