#include<stdio.h>
int main()
{

    int i,j,n;
    printf("enter the size the triangle: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++,printf("\n"))
    {
        for(j=1; j<=n; j++)
        {
            if(j>i)
                printf(" ");
            else
                printf("*");
        }

    }

    return 0;
}
