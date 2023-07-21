#include<stdio.h>
int main()
{
    int n,sum=0,sum1=0,temp=0,temp1=0;
    scanf("%d",&n);
    int arr[n],a[n],b[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            a[temp]= arr[i];
            temp++;
        }
        else
           {
            b[temp]= arr[i];
            temp++;
           }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",&a[i]);
    }
}
