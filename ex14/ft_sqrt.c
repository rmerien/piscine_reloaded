/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 00:56:12 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/04 00:56:43 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (i++ < nb / 2)
		if (nb == (i * i))
			return (i);
	return (0);
}
