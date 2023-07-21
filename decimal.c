
#include <stdio.h>
int find(int num)
{
	if (num == 0)
		return 0;
	else
		return (num % 2 + 10 *
				find(num / 2));
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d", find(num));
	return 0;
}
