#include <stdio.h>
int main()
{
 int a[10][10],b[10][10],c[10][10],i,j,k,n,m,p,q;
 printf("Enter the order of madrix 1:\n");
 scanf("%d%d",&m,&n);
 printf("Enter the order of madrix 2:\n");
 scanf("%d%d",&p,&q);
 if (n!=p)
  {
   printf("Matrix multiplication not possible\n");
   return -1;
  }
 printf("Enter the elements of matrix 1:\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  	{  
   	 scanf("%d",&a[i][j]);
 	 }
 }
  printf("Enter the elemens of matrix 2:\n");
 for(i=0;i<p;i++)
 {
  	for(j=0;j<q;j++)
  	{  
   	 scanf("%d",&b[i][j]);
 	 }
 }
 for(i=0;i<n;i++)
	{
 	for(j=0;j<q;j++)
 		{
  		c[i][j]=0;
  		for(k=0;k<p;k++)
 			{
  			c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
 			}
 		}
	}
printf("resultant matrix:\n");
for(i=0;i<n;i++)
	{
         for(j=0;j<q;j++)
		{
                 printf("%d\t",c[i][j]);
                }
	printf("\n");
	
        }
	return 0;
 }

