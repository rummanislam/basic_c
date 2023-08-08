#include<stdio.h>
main()
{
    int a,i,j,x=0;
    printf("Enter the last number.");
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
          for(j=2;j<i;j++)
           {
              if(i%j==0)
               {
                 x++;
                 break;
                }
            
            }
            if(x==0 && i!=1)
            {
            printf("%d ",i);
            }
            x=0;
    }
}