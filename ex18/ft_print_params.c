/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 01:00:51 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/04 01:01:02 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	(void) ac;
	while (av[++i])
		ft_putstr(av[i]);
	return (0);
}
