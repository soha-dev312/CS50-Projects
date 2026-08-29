#include <stdio.h>
#include <cs50.h>
typedef struct {
    string name;
    int id;
    float gpa;
} student ;
int main(void){
    student s1 ;
    s1.name = "Sohaila" ;
    s1.id = 1024 ;
    s1.gpa = 3.8 ;

    printf("Student Name: %s\n", s1.name);
    printf("Student ID: %i\n", s1.id);
    printf("Student GPA: %.1f\n", s1.gpa);


}
