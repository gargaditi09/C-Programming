#include <stdio.h>
int main ()
{
  int years,days,weeks;
  
  printf("Enter Days: ");
  scanf("%d",&days);
  
  years=days/365;
  weeks=(days%365)/7;
  days=days-(years*365+weeks*7);
  
  printf("Years:%d",years);
  printf("\nWeeks:%d",weeks);
  printf("\nDays:%d",days);
  
  return 0;
}
