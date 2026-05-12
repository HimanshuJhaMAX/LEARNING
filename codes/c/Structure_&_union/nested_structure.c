#include<stdio.h>
struct address
{
    int phNo;
    float gpa;
};
struct student
{
    char name[50];
    struct address add;
};
int main ()
{
    struct student st;
    printf("Enter the name of the student and gpa scores: ");
    scanf("%49s %f", st.name, &st.add.gpa);
    printf("The name of person is : %s\nThe GPA scored is : %f", st.name, st.add.gpa);
    return 0;
}
