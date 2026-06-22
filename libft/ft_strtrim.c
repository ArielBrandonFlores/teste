
#include "libft.h"

int	ft_isset(char const *set, char c)
{
	while (*set && c != *set)
		set++;
	return (c == *set);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	char	*begin;
	char	*end;

	if (!s1 ||!set)
		return (NULL);
	begin = (char *)s1;
	end = begin + ft_strlen(s1);
	while (*begin && ft_isset(*begin, set))
		++begin;
	while (begin < end && ft_isset(*(end - 1), set))
		--end;
	end = ft_substr(begin, 0, end - begin);
	return (end);
}

