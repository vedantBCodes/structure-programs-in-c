#include<stdio.h>
struct student //OR struct
{
    int roll_no;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;
    printf("The size of the given structure is %d bytes",sizeof(s1));
}
