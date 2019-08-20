#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *s)
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

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f(s + i);
			i++;
		}
	}
}

int		main()
{
	void	(*f)(char*);
	char *s = "abc";
	unsigned int i = 1;

	f = &ft_putstr;
	ft_striteri(s, f(&s[i]));
	return (0);
}
