#include<stdio.h>
int main()
{

  int n;
  printf("Enter any number:\n");
  scanf("%d", &n);

  switch(n)
  {

    case 1 ... 999:

    printf("%d", -n);
    break;

    case -999 ... -1 :

    printf("%d", -n);
    break;

    case 0:
    printf("Not applicable");
  }
  return 0;
  }

  
