#include <stdio.h>
int main()
{
 int choice,units;
 float bill;
  printf(" ELECTRICITY BILL CALCALCULATIOR\n");
  printf("1.DOMESTIC\n");
  printf("2.COMMERCIAL\n");
  printf("3.INSDUSRIAL\n");
  printf("enter your choice:");
  scanf("%d",&choice);
  printf("enter units consumed:");
  scanf("%d",&units);
  if (units<0)
  {
  printf("invalid units");
  return 0;
  }
  switch(choice)
  {
  case 1:
  bill=units*2;
  printf("domestic bill=Rs.%2f",bill);
  break;
  case 2:
  bill=units*5;
  printf("comercial bill=Rs.%2f",bill);
  break;
  case 3:
  bill=units*7;
  printf("industrial bill=Rs.%2f",bill);
  break;
  defult:
  printf("invalid choice");
  }
  return 0;
  }
