#include <stdio.h>
#include<stdlib.h>
int main() 
{ 
  char x;
  int a,b,c;
  
  
  

    

      printf("a. Check whether a given set of three numbers are lengths of an iscosceles triangle or not.\n ");
  printf("b. Check whether a given set of three numbers are lengths of an right-angled triangle or not.\n ");
  printf("c. Check whether a given set of three numbers are lengths of an equilateral triangle or not.\n ");
  printf("d. Exit\n");

  // printf("Enter three positive numbers: \n");
  printf(" Enter your choice: \n");
  scanf("%c", &x);

  switch(x)
  {
    case 'a':
    printf("Enter any three positive numbers: \n");
    scanf("%d%d%d", &a, &b,&c);
    
    if(a+b>c && a+c>b && b+c>a )
    {
      printf("Good you got a traingle.\n");

      if(a==b||a==c||b==c)
    {
      printf("The traingle is iscosceles.");
    }
      else
      {
      printf("Traingle is not iscosceles.");
      }
    }   
    
    else
    {
      printf("Oops it's not a triangle.");
    }
    break;

    case 'b':
    printf("Enter any three positive numbers: \n");
    scanf("%d%d%d", &a, &b,&c);
    
    if(a+b>c && a+c>b && b+c>a )
    {
      printf("Good you got a traingle.\n");

      if((a*a)+(b*b)==(c*c)||(a*a)+(c*c)==(b*b)||(b*b)+(c*c)==(a*a))
    {
      printf("The traingle is right-angled.");
    }
      else
      {
      printf("Traingle is not right-angled.");
      }
    }   
    
    else
    {
      printf("Oops it's not a triangle.");
    }
    break;


    case 'c':
    printf("Enter any three positive numbers: \n");
    scanf("%d%d%d", &a, &b,&c);
    
    if(a+b>c && a+c>b && b+c>a )
    {
      printf("Good you got a traingle.\n");

      if((a==b)&&(b==c))
    {
      printf("The traingle is equilateral.");
    }
      else
      {
      printf("Traingle is not equilateral.");
      }
    }   
    
    else
    {
      printf("Oops it's not a triangle.");
    }
    break;

    

      
    

    
    

    case 'd':
    exit(0);



    

    
  }







      
    

    

  
   

  

  return 0;
}
