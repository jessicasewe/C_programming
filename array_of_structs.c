#include <stdio.h>
#include <string.h>

struct Student
{
    char name[12];
    float gpa;
};



int main(){

    struct Student student1 = {"spongebob", 2.5};
    struct Student student2 = {"Macy", 3.5};
    struct Student student3 = {"bob", 4.0};
    struct Student student4 = {"clems", 1.0};

    
    struct Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("%-12s\t", students[i].name);
        printf("%0.2f\n", students[i].gpa);
    }
    

}