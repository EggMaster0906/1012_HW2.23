#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Enter three integers: ");

	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
	{
		if (b > c)
		{
			printf("the biggest one one one is: %d\n", a);
			printf("the smallest one is: %d\n", c);
		}
		else
		{
			if (a > c)
			{
				printf("the biggest one is: %d\n", a);
				printf("the smallest one is: %d\n", b);
			}
			else
			{
				printf("the biggest one is: %d\n", c);
				printf("the smallest one is: %d\n", b);
			}
		}
	}
	else
	{
		if (a > c)
		{
			printf("the biggest one is: %d\n", b);
			printf("the smallest one is: %d\n", c);
		}
		else
		{
			if (b > c)
			{
				printf("the biggest one is: %d\n", b);
				printf("the smallest one is: %d\n", a);
			}
			else
			{
				printf("the biggest one is: %d\n", c);
				printf("the smallest one is: %d\n", a);
			}
		}
	}
	return 0;
}