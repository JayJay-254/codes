// Program to add two numbers
/* 
// Program to add two numbers
Author:
Reg No:
Date:
*/
//preprocessor Directive scanf(), printf() 
#include<stdio.h>
int main () {
    // declaration and initialization 
    char a ;
    char name [] = {};
    int age = 21;
    float salary ;
    double area ;
    printf("Enter a character:");
    scanf("%c",&a);
    printf("the character is %c \n",a);
    printf("Enter your name:");
    scanf("%s",&name);
    printf("My name is %s \n",name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("My age is %d \n",age);
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("My salary is %f \n", salary );
    printf("Enter the area:");
    scanf("%lf",&area);
    printf("The area is %lf",area);
    /*
    printf("The character is  %c \t \n", a);
    printf("The name(string) is %s", name);
    printf("The age(int) is %d \n", age);
    printf("The salary is %f \n", age);
    printf("The area is %1f \n", area)
    */
   

    return 0;
}