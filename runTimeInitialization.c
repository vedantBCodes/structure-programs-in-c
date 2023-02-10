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
    printf("Enter the roll number of student s1:");
    scanf("%d",&s1.roll_no);
    printf("Enter the name of student s1:");
    scanf("%s",s1.name);   //No need of & sign while taking string as input
    printf("Enter the marks of student s1:");
    scanf("%f",&s1.marks);
    struct student s2;
    printf("Enter the information of student s2:");  //Enter roll number,name and marks respectively
    scanf("%d %s %f",&s2.roll_no,s2.name,&s2.marks);
    printf("%s",s1.name);
}
