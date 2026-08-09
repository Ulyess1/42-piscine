#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	zigzag(char *str)
{
	int	left;
	int	right;

	left = 0;
	right = ft_strlen(str) - 1;
	while (left <= right)
	{
		ft_putchar(str[left]);
		if (left != right)
			ft_putchar(str[right]);
		left++;
		right--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		zigzag(argv[1]);
	ft_putchar('\n');
}