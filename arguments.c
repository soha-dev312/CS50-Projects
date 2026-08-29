#include<stdio.h>
#include<cs50.h>
int main(int argc, string argv[]){
    if (argc == 3){
        printf("Welcome, %s %s !\n", argv[1],argv[2]);
    }else{
        printf("Please provide your first and last name");
    }
}
