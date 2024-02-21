// 23EC23
// Kalsekar Abdul Rehman Abdul Alim
// Date : 07 - 02 - 2024
// AIM : To Find the Greatest between two numbers 

#include <stdio.h>

void main () {
    int num1, num2;

    printf("Please Enter Number 1 \n");
    scanf("%d", &num1);
    printf("Please Enter Number 2 \n");
    scanf("%d", &num2);
    if (num1 == num2)
    {
        printf("Both the Numbers are Equal \n");
    }
    else {
    num1 > num2 ? printf("Number 1 : %d is the Greatest", num1) : printf("Number 2 : %d is the Greatest", num2);
    }
    
}

/*
OUTPUT
Please Enter Number 1 
30
Please Enter Number 2
10
Number 1 : 30 is the Greatest
*/