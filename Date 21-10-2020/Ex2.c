#include<stdio.h>
#include<conio.h>

int main()
{
    float b, h, Area;
    printf("area of a triangle.\n##########Nur Ratul##########\n");

    //Base
    printf("please enter base of the triangle: ");
    scanf("%f", &b);

    //Height
    printf("please enter height of the triangle: ");
    scanf("%f", &h);


    //Process
    Area=(b*h)/2;
    printf("area of Your given triangle is: %.2f\n", Area);
    printf("thank you for using my app :)\n");
    printf("enter any key to continue-- ");
    getch();
}
