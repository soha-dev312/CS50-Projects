#include <stdio.h>
int factorial (int n){
    // Base Case
    if(n == 1 || n == 0){
        return 1;

    }
    //Rcursive Step
    return n * factorial(n-1);
}
int main(void){
    int result = factorial(4);
    printf("Factorial of 4 is: %i\n", result);
}
