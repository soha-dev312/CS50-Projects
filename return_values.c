#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(int argc, string argv[]){
    if (argc != 2){
        printf("Error: Missing PIN code\n");
        return 1;
    }
    printf("Access Granted to PIN: %s\n",argv[1]);
    return 0;


}
