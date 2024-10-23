#include "libft.h"
#include <string.h>

int main()
{
	const char *s1 = "hello world";
	const char *s2 = "hello world";
	int c = 255;
	size_t	n = 11;
	char *r1 = ft_memchr(s1, c, n);
	char *r2 = memchr(s2, c, n);
	printf("F :%s\n", r1);
	printf("O :%s\n", r2);
}
