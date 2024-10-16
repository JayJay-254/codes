/*
Name:Jackson Njenga
Reg NO:CT102/G/21788/23
*/
#include <stdio.h>

int main() {
    int CustomerID;
    char CustomerName[50];
    int UnitConsumed;
    float ChargesPerUnit;
    float TotalAmount;
    float surcharge;
    surcharge=0;

    printf("\nEnter Customer ID: ");
    scanf("%d", &CustomerID);

    printf("Enter Customer Name: ");
    scanf("%s", CustomerName);  

    printf("Enter Unit Consumed: ");
    scanf("%d", &UnitConsumed);

    
    if (UnitConsumed < 200) {
        ChargesPerUnit = 1.20;
    } else if (UnitConsumed <= 400 ) {
        ChargesPerUnit = 1.50;
    } else if (UnitConsumed <= 600) {
        ChargesPerUnit = 1.80;
    } else {
        ChargesPerUnit = 2.00;
    }

    TotalAmount = UnitConsumed * ChargesPerUnit;

  
    if (TotalAmount > 400) {
        surcharge=0.85;
        TotalAmount=TotalAmount*surcharge;

    
    }

    printf("The Customer ID: %d\n", CustomerID);
    printf("The Customer Name: %s\n", CustomerName);
    printf("The ChargesperUnit: %.3f\n", ChargesPerUnit);
    printf("The TotalAmount to pay: %.2f\n", TotalAmount);
    printf("The surcharge is: %.3f\n", surcharge);

    return 0;
}
