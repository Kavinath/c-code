#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    linear(n);
}
int linear(int n)
{
   int arr[n];
   int temp=0;
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<n-1;i++)
   {
       for(int j=1;j<n;j++)
       {
           if(arr[i]>arr[j])
           {
               temp= arr[i];
               arr[i]= arr[j];
               arr[j]=temp;
           }
       }
   }
   int k;
   scanf("%d",&k);
   int lowind =0,highind =n;
   int mid = lowind + highind / 2;
   for(int i=0;i<n;i++)
   {
       if(k==arr[mid])
       {
           printf("found %d",mid);
       }

   }
   if(k<arr[mid])
   {
       for(int i=0;i<mid;i++)
       {
           if(k==arr[mid])
           {
               printf("found");
           }
           else
           {
               printf("not found");
           }
       }
   }
   if(k>arr[mid])
   {
       for(int i=mid;i<n;i++)
       {
           if(arr[i]==k)
           {
               printf("found");
           }
           else
           {
               printf("not found");
           }
       }
   }




}
