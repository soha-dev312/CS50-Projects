#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void){

    string name = get_string("Enter a word: ");
    int length = strlen(name);

    //string word = get_string("Enter a word: ");
    //int length = 0;
    //while(word[length] != '\0'){
        //length++;
    printf("The word length is: %i\n", length);


}



