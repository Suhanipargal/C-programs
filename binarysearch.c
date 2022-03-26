#include<stdio.h>
int main()
{
  int a[20],i,j,temp,key,mid,first,last,n;
  printf("enter value of n\n");
  scanf("%d",&n);
  printf("enter %d no.of elements\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("unsorted data\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);

  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
    }
  }
printf("sorted data\n");
for(i=0;i<n;i++)
{
  printf("%d\n",a[i]);
}
printf("enter the element to be searched\n");
scanf("%d",&key);
first=0;
last=n-1;
while(first<=last)
{
  mid=(first+last)/2;
  if(key==a[mid])
  {
    printf("element %d found at location %d\n",key,mid+1);
    return 0;
  }
  else if(key>a[mid])
  {
    first=mid+1;
  }
  else
  {
    last=mid-1;
  }
}  
printf("element %d not found\n",key);
return 0;
}
