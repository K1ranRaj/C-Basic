// Complete the function, marks_summation.

// marks_summation has the following parameters:

// int marks[number_of_students]: the marks for each student
// int number_of_students: the size of marks[]
// char gender: either 'g' or 'b'
// Returns int : the sum of marks for boys if gender == b , or of marks of girls if gender == g.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender){
    int sum = 0;
    if(gender == 'b'){
        for(int i=0;i<number_of_students;i = i+2){
            sum = sum + marks[i];
        }
    }
  
    if(gender == 'g'){
        for(int j=1;j<number_of_students;j=j+2){
            sum = sum + marks[j];
        }
    }
  
    return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
