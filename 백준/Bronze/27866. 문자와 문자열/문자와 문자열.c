#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    char s[1000];
    int i;

    scanf("%s", s);
    scanf("%d", &i);

    printf("%c", s[i - 1]);

    return 0;
}