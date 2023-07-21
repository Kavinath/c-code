#include<stdio.h>
int main()
{
    int n=121;
    
    int rem=0,rev=0,temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    printf("%d ",rev);
    printf((temp==rev)?"is a palindrome":"is not a palindrome");
}