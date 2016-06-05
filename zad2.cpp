#include <stdio.h>

int main() 
{
   
    int n, m, r;
	
    printf("Vvedite n:");
    scanf("%d", &n);
	
    printf("Vvedite m:");
    scanf("%d", &m);
	
    for ( ; n != 0; ){
    	r = m%n;
    	m = n;
    	n = r;
    }

    printf("NOD = %d", m);
    
    return 0;
}
