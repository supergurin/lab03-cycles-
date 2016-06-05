#include <stdio.h>
#include <math.h>

int main ()
{
    int max;
    double i, sum = 0;
	
    printf("max(i)= ");
    scanf("%d", &max);
	
    for (i = 1; i <= max; i++) {
    	sum = 1 / pow ((2 * i), 2);
    }
    printf("\nSumma ravna %lf", sum);
    
    return 0;
}
