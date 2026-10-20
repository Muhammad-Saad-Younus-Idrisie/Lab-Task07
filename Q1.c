#include <stdio.h>

int main(){
    //Declaring the arrays
    char student_names[3][50];
    int marks[3][3];
    float avg[3];

    //Taking inputs for student names and there respective outputs
    for (int i=0; i<3; i++){
        if (i>0){
            getchar();
        }

        printf("Enter Student Full Name: ");
        scanf("%[^\n]", student_names[1]);

        printf("Enter the marks for this student: ");
        for (int j=0; j<3; j++){
            printf("Subject %d: ", j+1);
            scanf("%d", marks[i][j]);
        }
    }

    //Calculating the averages
    for (int i=0; i<3; i++){
        int sum=0;
        for (int j=0; j<3; j++){
            sum = sum + marks[i][j];
        }
        avg[i] = (float)sum/3.0;
    }

    //Printing the arrays
    for (int i=0; i<3; i++){
        printf("Student Name: %s\n", student_names[i]);
        printf("Student Marks:\nSubject1: %d\nSubject2: %d\nSubject3: %d",marks[i][0],marks[i][1],marks[i][2]);
        printf("Average Marks: %.2f\n", avg[i]);
    }

    return 0;

}