#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;

	temp = malloc(sizeof(unsigned char) * (n + 1));
	ft_memcpy(temp, src, n);
	temp[n] = '\0';
	ft_memcpy(dest, src, n);
	free(temp);
	return (dest);
}
