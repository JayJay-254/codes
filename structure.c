//c structure
#include<stdio.h>
#include<string.h>

struct Student{
    char Reg_No[30];
    char email[40];
    int phone;
    int ID ;
    char name[15];
    float marks;
}student1, student2;

int main(){
//sruct student student1, student2;
/*
    strcpy(student1.name, "Jay Jay");
    strcpy(student1.email,"jay21788@gmail.com");
    student1.phone = 740596569;
    student1.ID = 42410985;
    strcpy(student1.Reg_No,"CT103/G/21788I/23");
    student1.marks = 89.6;
    */
   printf("Enter the name: ");
   scanf("%sn", student1.name);

   printf("Enter the email: ");
   scanf("%s", student1.email);

   printf("Enter the phone number: ");
   scanf("%d", &student1.phone);

   printf("Enter your ID: ");
   scanf("%d", &student1.ID);

   printf("Enter your Registration Number: ");
   scanf("%s", student1.Reg_No);

   printf("Enter your marks: ");
   scanf("%f", &student1.marks);
   

    printf("Name:%s\n", student1.name);
    printf("Email:%s\n", student1.email);
    printf("Phone number:%d\n", student1.phone);
    printf("ID number:%d\n", student1.ID);
    printf("Registration No:%s\n", student1.Reg_No);
    printf("Marks:%.2f\n", student1.marks);

    return 0;
}