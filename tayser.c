#include <stdio.h>
#include <math.h>
#define PI 3.142875
int main()
{
  float num,denum,degree,x,sum,term;
  int i;
  printf("Enter the degree:\n");
  scanf("%f",&degree);
  x=degree*(PI/180.0);
  i=1;
  sum=x;
  term=x;
  denum=1.0;
  num=x;
  do
    {
      i=i+2;
      num=-num*x*x;
      denum=denum*i*(i-1);
      term=num/denum;
      sum=sum+term;
    }while(fabs(term)>=0.00001);
  printf("sin(%f)=%f",degree,sum);
  printf("sin(%f)=%f",degree,sin(x));
  return 0;
  }


