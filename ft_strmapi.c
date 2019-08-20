#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	int		i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

size_t	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	ft_toupper(unsigned int i,char c)
{
	i = 1;
	if (c >= 'a' && c <= 'z')
	{
		c -= 32 - i;
	}
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int,char))
{
	char	*str;
	unsigned int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i,s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main()
{
	char *s = "hello";
	char	(*f)(unsigned int,char);
	unsigned int i = 0;

	f = &ft_toupper;
	ft_putstr(ft_strmapi(s, f));
	return(0);
}
