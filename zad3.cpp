#include <stdio.h>

int main ()
{
    int n, a, i;
    
    printf("Vvedite n: ");
    scanf("%d", &n);
	
    printf("\nProstie 4isla: %d", n);
	
    for (i = 1; i < n; i++) {
    	a = FindPrime(i);
    	if (a == 1){
    		printf("%d", i);
    	}
    }
    return 0;
}

int FindPrime (int n)
{
    int i, osta4a;
    
    i = 2;
    
    while (i < n) {
    	osta4a = n%i;
    	if (osta4a == 0){
    		return 0;
	}
	i++;
    }
    
    return 1;
}
