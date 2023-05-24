#include <stdio.h>
#include <conio.h>
#define p printf

float ac_blnc= 1000;

float main() {


    float withdraw=0;
    start:
    p("Input the amount of money you wanna withdraw:");
    scanf("%f",&withdraw);
    p("\n%0.2f amount will be deducted from your balance.",withdraw); //specifier %w.pf for round off a float to 2 decimal points
    ac_blnc-=withdraw;
    p("\nYour new balance is: %0.2f",ac_blnc);
    p("\nPress n to exit y to withdraw more money\n\n");

    char button=getch();
    if (button=='y'){goto start;}
}
