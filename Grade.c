#include<stdio.h>
#include<cs50.h>
int main(void){
    int grade = get_int("Enter your grade: ");
    if(grade < 0 || grade > 100){
        printf("Invaild grade!\n");
    }
    else if (grade >= 50){
        printf("Passed\n");
    }
    else{
        printf("Failed\n");
    }



}



