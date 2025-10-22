#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	int i = 0;
	while (b >= a)
		a *= 3, b *= 2, i++;
	printf("%d", i);
}
