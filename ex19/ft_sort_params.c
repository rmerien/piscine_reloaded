/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 01:01:17 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/05 17:18:34 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++ && *s1);
	return (*s1 - *s2);
}

void	ft_print_params(char	**av)
{
	int		i;

	i = 0;
	while (av[++i])
	{
		while(*av[i])
			ft_putchar(*av[i]++);
		ft_putchar('\n');
	}
}

void	ft_sort_params(char	**av)
{
	unsigned int	i;
	int				y;

	i = 0;
	y = 1;
	while (*av[++i])
	{
		while(y)
		{
			printf("%d\n\n\n\n\n\n", ft_strcmp(av[i], av[i + 1]));
			ft_strcmp(av[i], av[i + 1]) < 0 ? ft_swap(av[i], av[i + 1]), y = 0 : (y = 1);
		}
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
		ft_sort_params(av);
	ft_print_params(av);
	return (0);
}
