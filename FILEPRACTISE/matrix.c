#include<stdio.h>
int productOfMatrix(int arr[3][3],int aray[3][3],int product[3][3])
{
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          product[i][j]=arr[i][j]*aray[j][i]+arr[i][j]*aray[j][i]+arr[i][j]*aray[j][i];
        }
    }
}
void displayMatrix(int arr[3][3])
{
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}
int sumMatrix(int arr1[3][3],int arr2[3][3],int result[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           result[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
}
int main()
{
    int matrixA[3][3];
    int matrixB[3][3];
    int sum[3][3];
    int product[3][3];
    //enter alues at matrix a
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter value of matrixA at location [%d][%d]: ",i,j);
            scanf("%d",&matrixA[i][j]);
        }
    }
    //enter value at matrix b
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter value of matrixB at location [%d][%d]: ",i,j);
            scanf("%d",&matrixB[i][j]);
        }
    }
    sumMatrix(matrixA,matrixB,sum);
    displayMatrix(sum);
    printf("\n");
    productOfMatrix(matrixA,matrixB,product);
    displayMatrix(product);
  return 0;
}