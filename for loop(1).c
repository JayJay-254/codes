//loops
#include <stdio.h>
int main(){
	int i;
	int sum=0;
	
	for(i=1;i<=10;i++){
		
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("The sum is = %d", sum);
	return 0;
}
