#include<stdio.h>
#include<cs50.h>
//Return Values
int square (int n);
int main (void){
    int result = square(6);
    printf("Square is %i\n", result);
}
int square(int n){
    return n*n;
}
