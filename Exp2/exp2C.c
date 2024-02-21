// 23EC23
// Kalsekar Abdul Rehman 
// Date : 24 - 01 - 2024
// AIM : To Find the Greatest Number Among the Three

#include <stdio.h>
#include <math.h>

void main () {
    int n1;
    int n2;
    int n3;

    printf("Enter your First Number\n");
    scanf("%d", &n1);
    
    printf("Enter your Second Number\n");
    scanf("%d", &n2);
    
    printf("Enter your Third Number\n");
    scanf("%d", &n3);
    
    // Check if Two Numbers are equal
    if (n1 == n2 && n2 == n3) {
        printf("All the Three Numbers are Equal\n");
    }

    if (n1 == n2 && n3 > n1) {
        printf("N3 : %d is the Greatest\n", n3);
    }
    else if (n1 == n2 && n3 < n1) {
        printf("N1 and N2 : %d and %d are the Greatest\n", n1, n2);
    }


    else if (n2 == n3 && n1 > n2) {
        printf("N1 : %d is the Greatest\n",n1);
    }
    else if (n2 == n3 && n1 < n2) {
        printf("N2 and N3 : %d and %d are the Greatest\n", n2, n3);

    }

    else if (n1 == n3 && n2 > n1) {
        printf("N2 : %d is the Greatest\n", n2);
    }
    else if (n1 == n3 && n2 < n1) {
        printf("N1 and N3 : %d and %d are the Greatest\n", n1, n3);

    }

    else if (n1 > n2) {
        if (n3 > n1) {
            printf("N3 : %d is the Greatest\n", n3);
        }
        else {
            printf("N1 : %d is the Greatesr\n", n1);
        }
    }
    else if (n2 > n1) {
        if (n3 > n2) {
            printf("N3 : %d is the Greatest\n", n3);
        }
        else {
            printf("N2 : %d is the Greatest\n", n2);
        }
    }
}
