//WAP to print floyd's traiangle
#include <stdio.h>

int main() 
{
   int n;
   printf("Enter no. of rows until which you want to print in floyd triangle: ");
   scanf("%d", &n);
   int num=1;
   for (int i=1;i<=n;i++) 
   {
        for (int j=1;j<=i;++j) 
        {
            printf("%d ",num);
            ++num;
        }
        printf("\n");
   }
   return 0;
}