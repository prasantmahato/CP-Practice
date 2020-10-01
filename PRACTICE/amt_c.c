#include <stdio.h>

int main(void) 
{
	float balance;
	int withdraw;
	scanf("%d %f", &withdraw, &balance);
	if ( withdraw + 0.50 > balance || withdraw % 5 != 0) 
	    printf("%.2f", balance);
	else 
	    printf("%.2f\n", balance - ( withdraw + 0.50));
	
	return 0;
}
