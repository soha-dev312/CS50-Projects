#include <stdio.h>
#include <cs50.h>
int main(void){
    int age;
    do{
        age = get_int("Enter your age (must be 18 or older): ");
    }while(age < 18);
    printf("Welcome: Age accepted.\n");
}
