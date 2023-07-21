int password(char str[])
{
    char word[100]="have a nice day";
    int a,b,c,d =0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
          a=1;
        }
        if(str[i]>=97 && str[i]<=122)
        {
            b=1;
        }
        if(str[i]>=48 && str[i]<=57)
        {
            c=1;
        }
        if(str[i]>=90 && str[i]<=96)
        {
            d=1;
        }
    }
    if(a==1 && b==1 && c==1 && d==1)
    {
        return 1;
    }
    else
    {
        printf("Not strong");
    }

}

int main()
{
    char str[1000];
    scanf("%s",str);
    printf("%s",password(str));
}
