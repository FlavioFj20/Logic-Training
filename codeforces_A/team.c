#include <stdio.h>

int	main(void)
{
	int n, count = 0;

	scanf("%d", &n);
	while (n--)
	{
		int a, b, c, t;
		scanf("%d %d %d", &a, &b, &c);
		t = a + b + c;
		if (t >= 2)
			count++;
	}
	printf("%d", count);
}
