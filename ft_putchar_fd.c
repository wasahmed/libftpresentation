#include <fcntl.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

size_t	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

int main(int argc, char **argv)
{
	int fd;
	
	(void)argc;
	fd = 2;
	ft_putstr_fd(argv[1], fd);
	return (0);
}
