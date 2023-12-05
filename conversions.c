/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:38:17 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/11/13 09:38:17 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int sexidecihexi( int valori, int length, int cov)
{
	char hexi[32];
	int base;
	
	hexi =  "0123456789abcdef0123456789ABCDEF";
	if (cov == 0 || cov == 1)
		base = 16;
	else if (cov == 2 || cov == 3)
		base == 10;

	if (numi > 0)
	{
		int sexidecihexi(valori / base, length, cov);
		if (cov == 1)
			char *aescribir = hexi[valo % base + 16];
		else if (cov == 0)
			char *aescribir = hexi[valo % base];

		write (1, &aescribir, 1);
		length ++;
	}
	return length;
}

int charizard (int length, int cov)
{
	int i;

	i = 0;
	while (chari[i])
		write(1,&chari,1);

	while (chari[i])
		write(1,&chari,1);

return i;
}