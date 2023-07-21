
struct runtable
{
    char player_name[100];
    int run;
};

int main()
{
  struct runtable arr[11];
  for(int i=0;i<11;i++)
  {
      scanf("%s",arr[i].player_name);
      scanf("%d",&arr[i].run);
  }
  int sum =0;
  for(int i=0;i<11;i++)
  {

      sum+=arr[i].run;
  }

  printf("%d",sum);



}

