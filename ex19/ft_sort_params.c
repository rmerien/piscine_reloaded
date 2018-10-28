/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:54:21 by rmerien           #+#    #+#             */
/*   Updated: 2018/10/28 13:45:29 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

char	**ft_sort_params(char **av)
{
	unsigned int	i;
	int				test;
	char			*tmp;

	i = 1;
	test = 1;
	while (av[++i] && test)
	{
		if (ft_strcmp(av[i - 1], av[i]) > 0)
		{
			tmp = av[i - 1];
			av[i - 1] = av[i];
			av[i] = tmp;
			ft_sort_params(av);
		}
	}
	return (av);
}


void	ft_print_params(char **av)
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

int		main(int ac, char **av)
{
	ft_sort_params(av);
	(void) ac;
	ft_print_params(av);
	return (0);
}
