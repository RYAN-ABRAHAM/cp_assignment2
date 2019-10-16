#include<stdio.h>
int main()
{
  int i,j;
  int t=0;
  for(i=1;i<=5;i++)
  {
  	for(j=5;j>=t;j--)
	{
		printf(" ");
	}
	for(j=1;j<=i;j++)
	{
		printf("%d",j);
	}
	for(j=i-1;j>=1;j--)
	{
		printf("%d",j);
	}
	printf("\n");
	t++;
  }
  return 0;
}
