/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:32:17 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/05 16:39:42 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int ac, char **av)
{
	char	buf;
	int		fd;

	if (ac > 2)
		return (write(2, "Too many arguments.\n", 20));
	if (ac < 2)
		return (write(2, "File name missing.\n", 19));
	fd = open(av[1], O_RDONLY);
	while (read(fd, &buf, 1) > 0)
		write(1, &buf, 1);
	close (fd);
	return (0);
}
