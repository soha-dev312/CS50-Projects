#include<stdio.h>
#include<cs50.h>
int main(void){
    const float tax = 0.14;
    int pieces = get_int("Enter a number of pieces: ");

    float total_price = 0;
    for(int i = 0; i < pieces; i++){
        float price = get_float("Enter your price:");
        total_price += price;

    }
    float final_price = (total_price * tax) + total_price;
    printf("The Final Price: %.2f\n", final_price);
}
