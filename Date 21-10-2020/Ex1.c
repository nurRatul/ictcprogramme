#include<stdio.h>
#include<conio.h>

int main()
{
    float num1 , num2 , num3 , Avg;
    printf("avg of three number.\n##########Nur Ratul##########\n");

    //Num1
    printf("please enter number 1:");
    scanf("%f", &num1);

    //Num2
    printf("please enter number 2:");
    scanf("%f", &num2);

    //Num3
    printf("please enter number 3:");
    scanf("%f", &num3);

    //Process
    Avg=(num1+num2+num3)/3;
    printf("avg of your 3 given numbers is: %.2f\n", Avg);
    printf("thank you for using my app :)\n");
    printf("enter any key to continue-- ");
    getch();
}
