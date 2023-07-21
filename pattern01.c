#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++,printf("\n"))
    {
       for(int j=1;j<=n;j++)
       {
           int k = i+j;
           if(k%2==0)
            printf("1");
           else
            printf("0");
       }
    }
}
