#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
};
void main()
{
    struct student s1;
    printf("Enter the information for student s1:");
    scanf("%d%s%f",&s1.roll_no,s1.name,&s1.marks);
    printf("Name of the student is:%s",s1.name);
    printf("\nRoll number of the student is:%d",s1.roll_no);
    printf("\nmarks of the student is:%f",s1.marks);
}
