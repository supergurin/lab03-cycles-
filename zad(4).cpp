#include <stdio.h>
#include <math.h>

int main ()
{
    int max;
    double i, sum = 0;
    double factorial = 1;
    
    printf("max(i)=");
    scanf("%d", &max);
    
    for (i = 2; i <= max; i++) {
    	factorial *= i;
    	sum = ((1 - (1 / factorial)) * (1 - ( 1 / factorial)));
    }
    
    printf("\nSumma ravna %lf", sum);
    
    return 0;
}
