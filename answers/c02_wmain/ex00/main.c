#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, const char *src);

int main(void)
{
    char a[6] = "korea";
    const char *b = "kor";
    printf("%s, %s\n", a, b);
    ft_strcpy(a, b);
    printf("%s, %s\n", a, b);
	strcpy(a, b);
	printf("%s, %s\n", a, b);
}
