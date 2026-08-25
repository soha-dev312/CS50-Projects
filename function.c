#include<stdio.h>
#include<cs50.h>
int calculate_area(int length, int width);
int main(void){
    int l = get_int ("Enter length: ");
    int w = get_int ("Enter width: ");
    int area = calculate_area(l, w);
    printf("The Rectangle Area is: %i\n", area);
}
int calculate_area(int length, int width){
    return length * width ;
}
