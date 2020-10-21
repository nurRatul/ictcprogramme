#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
    float c , f;
    printf("fahrenheit to celsius converter.\n##########Nur Ratul##########\n");

    //Taking Input
    printf("please enter temperature in fahrenheit: ");
    scanf("%f", &f);


    //Process
    c=((f-32)*5)/9;
    printf("temperature in celsius is: %.2f\n", f);
    printf("thank you for using my app :)\n");
    printf("enter any key to continue-- ");
    getch();
}
