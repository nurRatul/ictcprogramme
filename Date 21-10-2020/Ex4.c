#include<stdio.h>
#include<conio.h>

int main()
{
    float a, b, Area;
    printf("area of a rectangle.\n##########Nur Ratul##########\n");

    //1st Edge
    printf("please enter one edge of the rectangle: ");
    scanf("%f", &a);

    //2nd Edge
    printf("please enter another edge of the rectangle: ");
    scanf("%f", &b);


    //Process
    Area= a*b;
    printf("area of your given rectangle is: %.2f\n", Area);
    printf("thank you for using my app :)\n");
    printf("enter any key to continue-- ");
    getch();
}
