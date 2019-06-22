#include <stdio.h>
#include <stdlib.h>

int main() {
        //Create a vector to get the employee's name.
        char n[100];
        
        //Create two double variables.
        double s, sold;
        
        //Read the employee's name.
        scanf("%s", n);
        
        //Read the employee's salary and the total value sold.
        scanf("%lf\n%lf", &s, &sold);
        
        //Print the TOTAL = R$ s + sold * 15 / 100.
        printf("TOTAL = R$ %.2lf\n", s + sold * 15 / 100);
        
        return 0;
}
