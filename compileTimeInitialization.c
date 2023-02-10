#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks; //marks(in percentage)
};
void main()
{
    struct student s1={21,"vedant",90.25};
    struct student s2={42,"Aditya",84.56};
    struct student s3;
    s3.roll_no=25;
    s3.name="rahul";
    s3.marks="75.12";
}
