#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	char sen_printable[] = "Hello";
	char sen_no_print[] = "He\nlo";
	char empty[] = "";
	printf("%s\n", sen_printable);
	printf("%d\n", ft_str_is_printable(sen_printable));
	printf("%s\n", sen_no_print);
	printf("%d\n",ft_str_is_printable(sen_no_print));
	printf("%s\n", empty);
	printf("%d\n", ft_str_is_printable(empty));
}

