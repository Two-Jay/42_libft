
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char find;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	find = c;
	if (!dst && !src)
		return (0);
	while (n--)
	{
		*d++ == *s++;
		if (*s == to_find)
			return (d + 1);
	}
	return (0);
}
