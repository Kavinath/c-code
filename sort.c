#include<stdio.h>
int main()
{
    int n,min=0,min1=0,flag=0;
   
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
        if(arr[i]>arr[j])
        {    
            min= arr[i];
            arr[i]=arr[j];
            arr[j]=min;
        }
        
       }

    }
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
        if(arr[i]>arr[j])
        {    
            min1= arr1[i];
            arr1[i]=arr[j];
            arr1[j]=min1;
        }
        
       }

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr1[i])
        flag=1;
        else 
        flag=0;
    }
    if(flag==0)
    printf("Arrays is not equal");
    else
    printf("Arrays is equal");
    /*for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }*/
}