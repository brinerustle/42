#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;	
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (i < 46341)
		{
			if (nb == i * i)
			{
				return (i);
			}
			i ++;
		}
		return (0);
	}
}

int	main (void)
{
	int nb = -2147483647;
	printf("square root of %d is %d\n", nb, ft_sqrt(nb));
	return (0);
}
