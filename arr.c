#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=0,e=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            a[k] = arr[i];
            k++;
        }
    }
    for(int j=0; j<n; j++)
    {
        if(arr[j]%2!=0)
        {
            b[e] = arr[j];
            e++;
        }
    }
    for(int i=0; i<k; i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0; i<e; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
