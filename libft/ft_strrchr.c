#include"libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char )c)
			return (char *) (s + i);
		i--;
	}
	return (NULL);
}

int main(void)
{
	const char	str[8] = "Hello 42";
	int		ch = 'l';

	char	*dest = ft_strrchr(str, ch);
	printf("%s\n", dest);
	return(0);
}
