// 23EC23
// Kalsekar Abdul Rehman 
// Date : 24 - 01 - 2024
// AIM : To Create a Basic Calculator Using Switch Case

#include <stdio.h>
#include <math.h>

void main () {
    // Creating Variables
    int num1;
    int num2;
    
    while (1) {
    int task = 10;

    printf("\nWhat Task Do you want to Perform \nPress 1 : Addition\nPress 2 : Subtraction\nPress 3 : Division\nPress 4 : Multiplication\nPress 0 : Quit\n");
    scanf("%d", &task);
    
    if (task == 0) {
        break;
    }

    printf("Enter your First Number \n");
    scanf("%d", &num1);

    printf("Enter your Second Number \n");
    scanf("%d", &num2);

    switch (task) {
        case 1:
        printf("Addition of the Given Numbers is %d", (num1 + num2));
        break;

        case 2:
       printf("Subtraction of the Given Numbers is %d", (num1 - num2));
        break;

        case 3:
        printf("Division of the Given Numbers is %d", (num1 / num2));
        break;
        
        case 4:
        printf("Multiplication of the Given Numbers is %d", (num1 * num2));
        break;
    }
    }
}

/*
What Task Do you want to Perform 
Press 1 : Addition
Press 2 : Subtraction
Press 3 : Division
Press 4 : Multiplication
Press 0 : Quit
1
Enter your First Number 
10
Enter your Second Number 
10
Addition of the Given Numbers is 20
What Task Do you want to Perform 
Press 1 : Addition
Press 2 : Subtraction
Press 3 : Division
Press 4 : Multiplication
Press 0 : Quit
2
Enter your First Number 
10
Enter your Second Number 
10
Subtraction of the Given Numbers is 0
What Task Do you want to Perform 
Press 1 : Addition
Press 2 : Subtraction
Press 3 : Division
Press 4 : Multiplication
Press 0 : Quit
3
Enter your First Number 
10
Enter your Second Number 
10
Division of the Given Numbers is 1
What Task Do you want to Perform 
Press 1 : Addition
Press 2 : Subtraction
Press 3 : Division
Press 4 : Multiplication
Press 0 : Quit
4
Enter your First Number 
10
Enter your Second Number 
10
Multiplication of the Given Numbers is 100
What Task Do you want to Perform 
Press 1 : Addition
Press 2 : Subtraction
Press 3 : Division
Press 4 : Multiplication
Press 0 : Quit
0

*/