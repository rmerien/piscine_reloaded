/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 14:31:15 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/05 17:03:41 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i]);
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (0);
	while (*src)
		*dest = *src++;
	*dest = *src++;
	return (dest);
}
