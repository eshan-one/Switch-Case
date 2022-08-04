#include<stdio.h>

int main()
{
int n,remainder;
  printf("Enter any even natural number:\n");
  scanf("%d", &n);

  remainder = n%2==0;

  switch(remainder)
    {
      case 1:
      printf("The upper nearest odd number is %d", n+1);
      break;

      case 0:
      printf("Please enter an even number :/");
      
    }
  return 0;
  
}
  
  
