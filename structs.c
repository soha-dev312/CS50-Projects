#include<stdio.h>
#include<cs50.h>
int main(void){
    int grades[]= {85, 90, 78, 92, 88};
    for (int i = 0; i < 5; i++){
        if(grades[i] == 92){
            printf("Grade 92 found at index %i\n", i);
                return 0;
        }
    }
        printf("Grade not found! \n");
        return 1;
}
