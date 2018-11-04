/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:32:17 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/04 16:34:48 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		ft_failure(char *str)
{
	while (*str)
		write(2, &*str++, 1);
	return (0);
}

int		main(int ac, char **av)
{
	char	buf;
	int		fd;

	if (ac < 2)
		return (ft_failure("File name missing.\n"));
	if (ac > 2)
		return (ft_failure("Too many arguments.\n"));
	fd = open(av[1], O_RDONLY);
	while (read(fd, &buf, 1) > 0)
		write(1, &buf, 1);
	close (fd);
	return (0);
}
