void	*memset(void *dst, int c, size_t n)
{
	unsigned char *temp;
	unsigned char value;

	temp = dst;
	value = c;
	while (n--)
	{
		*(temp++) = value;
	}
	return ((void *)dst);
}
