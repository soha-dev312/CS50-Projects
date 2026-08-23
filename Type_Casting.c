#include<stdio.h>
#include<cs50.h>
int main(void){
    int score = 45;
    int total = 60;
    float percentage = (float)score / (float)total * 100;
    printf("Your percentage is : %.2f %%\n", percentage);
}
