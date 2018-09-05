/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 01:00:51 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/04 01:32:53 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int		main(int ac, char **av)
{
	(void) ac;
	ft_print_params(av);
	return (0);
}
