#include<stdio.h>
main()
{
    int a,i,j,x=0;
    printf("Enter the last number.");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
      if(a%i==0)
      {
       x++;
       }
    
    }
    if(x==2)
    {printf("Prime number");}
    
    else
    printf("Not a prime number.");
    x=0;
    
}