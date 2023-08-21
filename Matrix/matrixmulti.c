#include<stdio.h>
main()
{
int n,i,j,k,sum=0;
int array1[3][3],array2[3][3],array3[3][3];
printf("Enter the elements of matrix A:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("A [%d][%d]:",i+1,j+1);
    scanf("%d",&array1[i][j]);
    printf("\n");
    }
    
    }
printf("Matrix A:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%d ",array1[i][j]);
    
    }
    printf("\n");
    }

printf("Enter the elements of matrix B:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("B [%d][%d]:",i+1,j+1);
    scanf("%d",&array2[i][j]);
    printf("\n");
    }
    
    }
printf("Matrix B:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%d ",array2[i][j]);
    
    }
    printf("\n");
    }

printf("A x B :\n");
    for(i=0;i<3;i++){
    
        for(j=0;j<3;j++)
           {
        
           for(k=0;k<3;k++){
           sum=sum+array1[i][k]*array2[k][j];
            }
            array3[i][j]=sum;
            sum=0;
       
        }
          
    
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             printf("%4d ",array3[i][j]);
        }
        printf("\n");
    }
}