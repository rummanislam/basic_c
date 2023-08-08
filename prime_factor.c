#include<stdio.h>
main()
{
  int a,b,f,i,j,k,x;
  printf("Enter the number:");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
        if(a%i==0)
        {    x=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    x++;
                 }
            }
            if(x==2)
            printf("%d ",i);
        
        }
   }

}