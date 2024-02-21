// 23EC23
// Kalsekar Abdul Rehman Abdul Alim
// Date : 07 - 02 - 2024
// AIM : To Check Whether the Number is an Armstrong or Not 
#include <stdio.h>
#include <math.h>

void main () {
    // Taking the Input
    int num = 0;
    printf("Please Enter a Number \n");
    scanf("%d", &num);

    // Extracting the length of the Number
    int length = floor(log10(num) + 1);
    
    // Creating Some Temp Variables
    int currentNum = 0;
    int nextNum = 0;
    int temp = 0;
    currentNum = num;

    for (int i = 0; i < length; i++)
    {
        nextNum = currentNum / 10;
        currentNum = currentNum % 10;
        // printf("Current Number is :  %d \n", currentNum);
        temp += (int) pow(currentNum, length);
        // printf("Cube of Current Num is : %d \n", temp);
        currentNum = nextNum;
        // printf("Now the nUmber is : %d \n", currentNum);
    }
    num == temp ? printf("The Number %d is an Armstrong", temp) : printf("The Number %d is not an Armstrong Number", num);
}

/*
Please Enter a Number 
371
Current Number is :  1
Cube of Current Num is : 1
Now the nUmber is : 37
Current Number is :  7
Cube of Current Num is : 344
Now the nUmber is : 3
Current Number is :  3
Cube of Current Num is : 371
Now the nUmber is : 0
The Number 371 is an Armstrong
*/