#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char s[101];
	scanf("%s", s);
	int i = 0, c = 0;
	while (s[i])
		if (islower(s[i++]))
			c++;
	int len = strlen(s) - c;
	i = 0;
	if (len <= c)
		while (s[i])
			s[i] = tolower(s[i++]);
	else
		while (s[i])
			s[i] = toupper(s[i++]);
	printf("%s", s);
	return (0);
}
