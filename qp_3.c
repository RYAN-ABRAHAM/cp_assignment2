#include<stdio.h>
int main()
{
  int i,l;
  for(i=0;i<=4;i++)
  {
    for(l=0;l<=i;l++)
    {
      if((i+l)%2==0)
      {
        printf("1");
      }
      else
      {
        printf("0");
      }
    }
    printf("\n");
  }
return 0;
}
