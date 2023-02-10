#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
};
void main()
{
    struct student s[3];
    int i;
    printf("Enter the information of 3 students:");
    for(i=0;i<3;i++)
    {
            scanf("%d%s%f",&s[i].roll_no,s[i].name,&s[i].marks);
    }
    printf("Entered Information of 3 students are\n:");
    for(i=0;i<3;i++)
    {
            printf("Roll number-%d\nName of the student-%s\nMarks of the student-%f",s[i].roll_no,s[i].name,s[i].marks);
    }

}

