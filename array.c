#include<stdio.h>
#include<cs50.h>
int main(void){
    int temps[4] = {28, 31, 30, 32};
    int sum = 0;
    for(int i = 0; i < 4; i++){

        sum += temps[i];

    }
    float average = sum / 4.0;
    printf("Average Temperature: %.2f\n", average);

}
