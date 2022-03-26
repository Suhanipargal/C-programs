#include<stdio.h>
int main()
{
struct student
{
 char usn[10];
 char stuname[10];
 int sem;
 float m1,m2,m3,m4,m5,avg;
};
struct student s[10];
int i,n;
printf("Enter number of student records:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("Student USN:\n");
 scanf("%s",s[i].usn);
 printf("Student name:\n");
 scanf("%s",s[i].stuname);
 printf("enter sem:\n");
 scanf("%d",&s[i].sem);
 printf("enter 5 subjects marks:\n");
 scanf("%f%f%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
}
for(i=0;i<n;i++)
{
 s[i].avg=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5.0;
}
printf("\nstudents who scored above average:\n");
printf("\nUSN\tStudent name\tAverage");
for(i=0;i<n;i++)
{
 if (s[i].avg>50.0)
	{
         printf("\n%s\t%s\t%f",s[i].usn,s[i].stuname,s[i].avg);
	}
}
printf("\nstudents who scored below average:\n");
printf("\nUSN\tStudent name\tAverage");
for(i=0;i<n;i++)
{
 if (s[i].avg<50.0)
	{
         printf("\n%s\t%s\t%f",s[i].usn,s[i].stuname,s[i].avg);
	}
}
return 0;
}


