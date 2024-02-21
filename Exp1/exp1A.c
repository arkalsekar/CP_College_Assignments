// 23EC23
// Kalsekar Abdul Rehman 
// Date : 17 - 01 - 2024
// AIM : To explore and output Variables 
#include <stdio.h>

int main () {
    // Variables
    int a, b ,c;

    printf("Please Enter your Number 1 \n");
    scanf("%d", &a);

    printf("Please Enter your Number 2 \n");
    scanf("%d", &b);

    printf("Please Enter your Number 3 \n");
    scanf("%d", &c);

    int sum = a + b + c;
    printf("The sum of the number is %d \n", sum);
    return 0;
}

// Output
/*
Please Enter your Number 1 
12
Please Enter your Number 2 
12
The sum of the number is 24 
*/