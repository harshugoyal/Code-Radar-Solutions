
#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input
   
    scanf("%d %d", &num1,&num2);


    // Checking if num1 is greater than num2
    if (num1 < num2) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}