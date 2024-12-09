#include<stdio.h>
struct student
{
char name[50];
int id;
int age;
};
int main()
{
struct student steeve={"steeve",135,21};
printf("Student Name:%s\n",steeve.name);
printf("Student Id:%d\n",steeve.id);
printf("Student Age:%d\n",steeve.age);
return 0;
}

