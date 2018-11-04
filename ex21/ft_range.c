/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 14:36:25 by rmerien           #+#    #+#             */
/*   Updated: 2018/10/28 14:40:44 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int		*array;

	if (!(array = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	while (min != max)
		*array = min++;
	return (array);
}
