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

int sexidecihexi(long long int valori, int cov)
{
	char *hexi;
	int length;
	int base;
	char aescribir;

	length = 0;
	hexi =  "0123456789abcdef0123456789ABCDEF";
	if (cov == 0 || cov == 1 || cov == 4)
		base = 16;
	else if (cov == 2 || cov == 3)
		base = 10;
	if (valori > 0)
	{
		length += sexidecihexi(valori / base, cov);
		if (cov == 1)
			aescribir = hexi[valori % base + 16];
		else
			aescribir = hexi[valori % base];

		write (1, &aescribir, 1);
		length ++;
	}
	return length;
}

int charizard (char *chari)
{
	int i;

	i = 0;
	while (chari[i])
		write(1,&chari[i],1);

return i;
}

int singlecharizard (int chari)
{
	char auxchar = (char) chari;
 	write(1,&auxchar,1);

return 1;
}