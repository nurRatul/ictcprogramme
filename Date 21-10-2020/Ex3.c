#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a, b, c, s, Area;
    printf("area of a triangle.\n##########Nur Ratul##########\n");

    //1st Edge
    printf("please enter one edge of the triangle: ");
    scanf("%f", &a);

    //2nd Edge
    printf("please enter another edge of the triangle: ");
    scanf("%f", &b);

    //3rd Edge
    printf("please enter another edge of the triangle: ");
    scanf("%f", &c);

    //Process
    s=(a+b+c)/2.0;

    Area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of your given triangle is: %.2f\n", Area);
    printf("thank you for using my app :)\n");
    printf("enter any key to continue-- ");
    getch();
}
