#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	char s1[101];
	char s2[101];
	scanf("%s %s", s1, s2);

	for (int i = 0; s1[i]; i++)
	{
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
	}
	int res = strcmp(s1, s2);
	printf("%d\n", res < 0 ? -1 : res == 0 ? 0 : 1);
	return (0);
}
