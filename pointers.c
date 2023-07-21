#include<sdio.h>
int main()
{
    int a,*ptr;
    scanf("%d",&a);
    ptr = &a;
    printf("%d",*ptr);
    printf("%d",a);
    printf("%d",ptr);

}