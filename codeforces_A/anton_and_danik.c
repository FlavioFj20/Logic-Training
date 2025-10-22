#include <stdio.h>
 
int main() {
    int n, count_a, count_d;
    count_a = 0;
    count_d = 0;
    scanf("%d", &n);
    char s[100000];
    scanf("%s", s);
    while (n--)
    {
        if (s[n] == 'A')
            count_a++;
        else if (s[n] == 'D')
            count_d++;
    }
    if (count_a > count_d)
        printf("Anton");
    else if (count_a < count_d)
        printf("Danik");
    else
        printf("Friendship");
 
    return 0;
}
