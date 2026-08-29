#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(void){
    string text = get_string("Enter text: ");
    printf("Toggled: ");
    for(int i = 0; i < strlen(text); i++){
        if (isupper(text[i])){
            printf("%c", tolower(text[i]));
        }else{
            printf("%c", toupper(text[i]));
        }

    }
    printf("\n");
}
