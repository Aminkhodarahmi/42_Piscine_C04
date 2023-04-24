#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = - nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}

int		ft_atoi(char *str)
{
	int i;
	int j;
	int out;

	i = 0;
	j = 1;
	out = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		out *= 10;
		out += str[i] - '0';
		i++;
	}
	return (out);
}

int main(int argc, const char *argv[])
{
	char	str[] = {'1', '0', '2', '1', '\n', '\0'};
	int i;

	i = 0;
	
	ft_putstr(str);
	i = ft_atoi(str);
	ft_putnbr(i);
	ft_putchar('\n');

	i = atoi(str);
	ft_putnbr(i);
	return 0;
}





// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		int res;
// 		int	i;
		
// 		i = 0;
// 		while (argv[1][i])
// 		{
// 			if (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '-' || argv[1][i] == '+')
// 			{
// 				i++;
// 			}
// 			while (argv[1][i] && argv[1][i] >= '0' && argv[1][i] <= '9')
// 			{
// 				res = res * 10 + (argv[1][i] - 48);
// 				i++;
// 			}
// 		}
// 		printf ("res = %d \n", res);
// 	}
// 	return (0);
// }
