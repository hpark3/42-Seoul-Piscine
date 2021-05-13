unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	d_size;

	i = 0;
	d_size = 0;
	while (dest[d_size])
		d_size++;
	while (src[i] && (d_size + 1 < size))
	{
		dest[d_size] = src[i];
		d_size++;
		i++;
	}
	dest[d_size] = '\0';
	return (d_size);
}
