#include <stdio.h>
int main()
{
  float unit,total,charge;
  char name[20];
  printf("Enter the name of customer:\n");
  fgets(name,20,stdin);//for reading string fgets(name,maxsize,stdin)
  printf("Enter the units consumed:\n");
  scanf("%f",&unit);

  charge=0;

  if (unit>=1 && unit<=200)
  {
    charge=0.8*unit;
  }
  else if (unit>=201 && unit<=300)
  {
    charge=0.8*200+(0.9*(unit-200));
  }
  else if(unit>300)
  {
    charge=0.8*200+(0.9*100)+(1*(unit-300));
  }
  total=charge+100;
  if (total>400)
  {
    total=total+0.15*total;
  }
  printf("\n\nElectricity bill\n\n");
  printf("name=%s\n",name);
  printf("units=%.2f\n\n",unit);
  printf("total charge=%.2f\n",total);
  return 0;
}

