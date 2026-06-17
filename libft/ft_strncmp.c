#include"libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;

	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return(0);
}

int main(void)
{
	char	str1[9]="Hello 42";
	char	str2[9]="Hella 42";
	int		cmp;
	cmp = ft_strncmp(str1,str2,0);
	printf("%d\n", cmp);
	return(0);
}
