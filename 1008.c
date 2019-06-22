#include <stdio.h>
#include <stdlib.h>

int main() {
   	 //Create two integers and one double variable.
	int n, wh;
	double aphw;
	
	//Read a value for each variable.
	scanf("%d\n%d\n%lf", &n, &wh, &aphw);
	
        //Print the employee's number.
	printf("NUMBER = %d\n", n);
    
        //Print SALARY = U$ <wh * aphw>.
	printf("SALARY = U$ %.2lf\n", wh * aphw);
    
	return 0;
}
