/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 00:55:47 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/04 00:55:49 by rmerien          ###   ########.fr       */
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
