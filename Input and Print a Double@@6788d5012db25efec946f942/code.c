#include <stdio.h>

int main() {
    float h;
    
    scanf("%f", &h);  // Correctly reading a float
    
    printf("You entered: %.4f\n", h);  // Use %.4f instead of %.4lf
    
    return 0;
}
