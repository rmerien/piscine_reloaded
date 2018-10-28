/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 14:31:15 by rmerien           #+#    #+#             */
/*   Updated: 2018/10/28 14:34:31 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char	*dest;

	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))a
		return (0);
	while (*src)
		*dest = *src++;
	*dest = *src++;
	return (dest);
}
