#include <stdio.h>
#include <math.h>

int main ()
{
    int max;
    double k, sum = 0;
    
    printf("max(k)=");
    scanf("%d", &max);
    
    for (k = 1; k <= max; k++) {
    	sum = pow(-1, k) / ((2 * k + 1) * k);
    }
    
    printf("\nSumma ravna %lf", sum);
    
    return 0;
}
