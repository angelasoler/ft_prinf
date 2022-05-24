/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:51:44 by asoler            #+#    #+#             */
/*   Updated: 2022/05/24 14:11:17 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n2;
	char		aux[11];
	int			i;

	i = 0;
	n2 = n;
	if (n2 < 0)
	{
		write(fd, "-", 1);
		n2 *= -1;
	}
	while (n2 > 9)
	{
		aux[i] = (n2 % 10) + 48;
		n2 /= 10;
		i++;
	}
	aux[i] = n2 + 48;
	while (i >= 0)
	{
		write(fd, &aux[i], 1);
		i--;
	}
}