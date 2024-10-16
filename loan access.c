/*
program to print loan qualification
Author:Jackson Njenga
Registration Number:CT102/G/21788/23
*/

#include<stdio.h>
int main(){
	
	int age;
	float income;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	printf("Enter your annual imcome: ");
	scanf("%f", & income);
	
	if (age >= 21 && income >= 21000){
		printf("congratulations, you qaulify for a loan");
	}else {
			printf("unfortunately, we are unable to offer you a loan at this time.\n");
	}
			return 0;
			}
