// 23EC23
// Kalsekar Abdul Rehman 
// Date : 17 - 01 - 2024
// AIM : To Show Area of a Circle
#include <stdio.h>
#include <math.h>

int main () {
    // Variables
    int radius;
    float area;
    printf("Please Enter the Radius of the Circle \n");
    scanf("%d", &radius);

    area  = M_PI * radius * radius;
    printf("The Area of the Rectangle is %f \n", area);
    return 0;
}

// Output
/*
Please Enter the Radius of the Circle 
10
The Area of the Rectangle is 314 
*/