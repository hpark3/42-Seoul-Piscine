#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char *src;
    char dest[20];

    src = "Hello World";
    printf("%s\n", src);
    strncpy(dest, src, 8);
    printf("%s\n", dest);
    ft_strncpy(dest, src, 8);
    printf("%s\n", dest);
}