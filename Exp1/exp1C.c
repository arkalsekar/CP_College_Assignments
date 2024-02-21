// 23EC23
// Kalsekar Abdul Rehman 
// Date : 17 - 01 - 2024
// AIM : To Show Area of Rectangle
#include <stdio.h>

int main () {
    // Variables
    int length, breadth , area;

    printf("Please Enter the Length of the Rectangle \n");
    scanf("%d", &length);

    printf("Please Enter the Breadth of the Rectangle \n");
    scanf("%d", &breadth);

    area  = length * breadth;
    printf("The Area of the Rectangle is %d \n", area);
    return 0;
}

// Output
/*
Please Enter the Length of the Rectangle 
10
Please Enter the Breadth of the Rectangle 
10
The Area of the Rectangle is 100
*/