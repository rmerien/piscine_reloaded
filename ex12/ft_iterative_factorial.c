/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 15:35:42 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/27 15:46:19 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb-- > 1)
		res *= nb;
	return (res);
}
