#include <stdio.h>

int main()
{
    float writtenTest, labExams, assignment, overallGrade;

    printf("Enter the marks scored by the student:\n");
    printf("Written test = ");
    scanf("%f", &writtenTest);

    printf("Lab Exams = ");
    scanf("%f", &labExams);

    printf("Assignment = ");
    scanf("%f", &assignment);

    overallGrade = (writtenTest * 0.7) +(labExams * 0.2) + (assignment * 0.1);

    printf("Grade of Student is %.1f\n" , overallGrade);

    return 0;
}