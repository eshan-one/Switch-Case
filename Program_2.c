#include <stdio.h>
#include<stdlib.h>
int main() 
{
  char x;
  int a,b;
  printf("a. Addition\n");
  printf("b. Subtraction\n");
  printf("c. Multiplication\n");
  printf("d. Division\n");
  printf("e. Exit\n");
  printf("Enter any choice:\n ");
  scanf("%c", &x);

  switch(x){

    case 'a':
    printf("Enter any two numbers:\n");
    scanf("%d" "%d", &a, &b);
    printf(" The sum is %d", a+b);
    break;

    case 'b':
    printf("Enter any two numbers:\n");
    scanf("%d" "%d", &a, &b);
    printf(" The difference is %d", a-b);
    break;

    case 'c':
    printf("Enter any two numbers:\n");
    scanf("%d" "%d", &a, &b);
    printf(" The product is %d", a*b);
    break;

    case 'd':
    printf("Enter any two numbers:\n");
    scanf("%d" "%d", &a, &b);
    printf(" The division of a by b is %d", a/b);
    break;

    case 'e':
    exit(0);
    
    
  }
  
  return 0;
}
