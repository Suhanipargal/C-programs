//program for simple calculator
#include <stdio.h>
int main()
{
  int a,b,result;
  char op;
  printf("enter two operands\n");
  scanf("%d%d",&a,&b);
  printf("enter operation\n");
  scanf(" %c",&op);
  if(op=='+')
  {
    result=a+b;
    printf("%d+%d=%d\n",a,b,result);
  }
  else if(op=='-')
  {
    result=a-b;
    printf("%d-%d=%d\n",a,b,result);
  }
  else if(op=='*')
  {
    result=a*b;
    printf("%d*%d=%d",a,b,result);
  }
  else if(op=='/')
  {
    if(b==0)
    {
      printf("division not possible\n");
      return -1;
    }
    else
    {
      result=a/b;
      printf("after dividion qu=%d\n",result);
    }
  }
  else if(op=='%')
  {
    if(b==0)
    {
      printf("division not possible");
      return -1;
    }
    else
    {
      result=a%b;
      printf("after division rem=%d\n",result);
    }
  }
  else
  {
    printf("enter correct operator\n");
  }
  return 0;
}
