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

void	ft_striter(char *s, void (*f)(char *))
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

	f = &ft_putstr;
	ft_striter(s, f);
	return (0);
}
