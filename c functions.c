#include<stdio.h>
#include<math.h>
int sum(int x, int y, int z);
float division(float a, float b);

int main(){
int result,x,y,z;
float div_1,a, b;

printf("Enter the 3 values: ");
scanf("%d%d%d",&x,&y,&z);

result = sum(x,y,z);
div_1=division(a,b);
 printf("Enter the 2 numbers: ");
 scanf("%f%f", &a,&b);

printf("The sum is %d\n",result);
printf("The division is %.1f\n", div_1);
    return 0;
}


int sum(int x, int y, int z){
int result;
result = x + y + z;
return result;
}

float division(float a,float b){
    int div;
    div = a/b;
    return div;
}
