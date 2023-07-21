#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n],a[n],b[n],temp=0,temp1=0,sum=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a[temp]=arr[i];
        }
        else
        {
            b[temp1]=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}
