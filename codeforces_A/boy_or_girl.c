#include <stdio.h>
#include <string.h>

int	verify(int i, char c, char *s)
{
	int j = 0;
	while (j < i)
	{
		if (c == s[j++])
			return (0);
	}
	return (1);
}

int main(void)
{
	char s[101];
	scanf("%s", s);

	int count = 0;
	for (int i = 0; s[i]; i++)
	{
		char c = s[i];
		if (verify(i, s[i], s))
			count++;
	}
	if (count % 2 == 0)
		printf("CHAT WITH HER!");
	else
		printf("IGNORE HIM!");
	return (0);
}
