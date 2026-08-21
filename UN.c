#include <stdio.h>
#include <cs50.h>
int main(void){
 string name = get_string ("what's your name? ");
 int year = get_int ("Enter your academic year?" );
 printf("Welcome %s, You are %d in year.\n", name, year);

}
