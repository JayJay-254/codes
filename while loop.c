//while loop
#include <stdio.h>
int main()
{
	int i=33;
	int sum=0;
	
	while(i<=72){
		
		printf("%d\n",i);
		
		i++;
		sum+=i;
	}
	printf("The sum=%d",sum);
	return 0;
}