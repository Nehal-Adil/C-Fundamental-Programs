// Write a program to find out whether a student is pass or fail; if it requires a total of 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as input from the user.

#include <stdio.h>

int main()
{
    int maths, english, science, marks_obtained;
    float total_marks = 300, percentage;

    printf("Enter the marks of the student: \n");
    printf("Maths: ");
    scanf("%d", &maths);
    printf("English: ");
    scanf("%d", &english);
    printf("Science: ");
    scanf("%d", &science);

    marks_obtained = maths + science + english;
    printf("Marks Obtained: %d\n", marks_obtained);

    percentage = (marks_obtained / total_marks) * 100;
    printf("Percentage = %0.2f\n", percentage);

    if ((percentage < 40) || (maths < 33) || (english < 33) || (science < 33))
    {
        printf("FAIL");
    }
    else
    {
        printf("PASS");
    }

    return 0;
}