#include<stdio.h>
#include<conio.h>
#include<math.h>

//defining Pi
#define Pi 3.1416


int main()
{
    float r, Area;
    printf("area of a circle.\n##########Nur Ratul##########\n");

    //Taking Input
    printf("please enter radius of the circle: ");
    scanf("%f", &r);


    //Process
    Area=Pi*pow(r,2);
    printf("area of your given circle is: %.2f\n", Area);
    printf("thank you for using my app :)\n");
    printf("enter any key to continue-- ");
    getch();
}
