#include"libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*copy;

	i = 0;
	while (s[i])
		i++;
	if (!s)
		return (NULL);
	copy = (char *)malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s, i + 1);
	return (copy);
}
