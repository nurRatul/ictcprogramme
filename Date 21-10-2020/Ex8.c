#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
    float in , ch;
    printf("centimeter to inch converter.\n##########Nur Ratul##########\n");

    //Taking Input
    printf("please enter length in centimeter: ");
    scanf("%f", &ch);


    //Process
    in=ch/2.54;
    printf("length in inch is: %.2f\n", in);
    printf("thank you for using my app :)\n");
    printf("enter any key to continue-- ");
    getch();
}
