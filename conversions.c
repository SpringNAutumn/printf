/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:56:16 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/12/08 19:56:16 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	sexihexi(unsigned long long int valori, int cov)
{
	char	*hexi;
	int		length;
	char	aescribir;

	length = 0;
	hexi = "0123456789abcdef0123456789ABCDEF";
	if (valori < 16)
	{
		if (cov == 1)
			aescribir = hexi[valori % 16 + 16];
		else
			aescribir = hexi[valori % 16];
		write(1, &aescribir, 1);
		return (++length);
	}
	length += sexihexi(valori / 16, cov);
	if (cov == 1)
		aescribir = hexi[valori % 16 + 16];
	else
		aescribir = hexi [valori % 16];
	write(1, &aescribir, 1);
	return (++length);
}

int	sexideci(long long int valori)
{
	char	*deci;
	int		length;
	char	aescribir;

	length = 0;
	deci = "0123456789";
	if (valori < 0)
	{
		length += write(1, "-", 1);
		valori = valori * -1;
	}
	if (valori > 9)
		length += sexideci(valori / 10);
	aescribir = deci[valori % 10];
	write(1, &aescribir, 1);
	return (++length);
}

int	charizard(char *chari)
{
	int	i;

	i = 0;
	if (!chari)
	{
		return (write(1, "(null)", 6));
	}
	else if (!*chari)
		return (write(1, "", 0));
	else
	{
		while (chari[i])
		{
			write(1, &chari[i], 1);
			i++;
		}
	}
	return (i);
}

int	singlecharizard(int chari)
{
	char	auxchar;

	auxchar = (char)chari;
	write(1, &auxchar, 1);
	return (1);
}
