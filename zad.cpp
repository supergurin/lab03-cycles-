#include <stdio.h>
 
int main() 
{
    int n, i;
    
    printf("Vvedite chislo: ");
    scanf("%d", &n);
    
    while (n != 0){
    	n=n/10;
	i++;
    }
    
    printf("\nKolichestvo cifr v chisle = %d", i);
    
    return 0;
}
