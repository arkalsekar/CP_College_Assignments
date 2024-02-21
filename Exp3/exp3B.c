#include <stdio.h>
void main () {
    int num1, num2, num3;
    
    printf("Please Enter Number 1 \n");
    scanf("%d", &num1);
    
    printf("Please Enter Number 2 \n");
    scanf("%d", &num2);

    printf("Please Enter Number 3 \n");
    scanf("%d", &num3);

    if (num1 == num2)
    {
        num1 > num3 ? ("Number 1 : %d and Number 2 : %d is the Greatest\n", num1, num2) : ("Number 3 : %d is the Greatest\n", num3);
    }
    else if (num2 == num3)
    {
        num2 > num1 ? ("Number 2 : %d and Number 3 : %d is the Greatest\n", num2, num3) : ("Number 1 : %d is the Greatest\n", num1);
    } 
    else if (num1 == num3)
    {
        num1 > num2 ? ("Number 1 : %d and Number 3 : %d is the Greatest\n", num1, num3) : ("Number 2 : %d is the Greatest\n", num2);
    } 
    else if {
        
    }

}