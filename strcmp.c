#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void){
    string cities[] = {"Cairo", "Alex", "Giza", "Aswan"};
    for(int i = 0; i < 4; i++ ){
        if(strcmp(cities [i], "Giza") == 0){
            printf("City found at position %i\n", i+1);
            return 0;
        }
    }
    printf("City not found.\n");
    return 1;
}
