#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
    float c , f;
    printf("celsius to fahrenheit converter.\n##########Nur Ratul##########\n");

    //Taking Input
    printf("please enter temperature in celsius: ");
    scanf("%f", &c);


    //Process
    f=(c/5)*9 +32;
    printf("temperature in fahrenhit is: %.2f\n", f);
    printf("thank you for using my app :)\n");
    printf("enter any key to continue-- ");
    getch();
}
