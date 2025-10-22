#include <stdio.h>
 
int main() {
    int n, h, cont;
    cont = 0;
    scanf("%d %d", &n, &h);
    while (n--)
    {
        int a;
        scanf("%d", &a);
	a > h ? cont +=2 : cont++;
    }
    printf("%d", cont); 
    return 0;
}
