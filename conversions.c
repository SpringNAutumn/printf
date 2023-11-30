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

	// Aqui implementaremos las conversiones.
	// La hexademial va a ser igual para uppercase y lowercase
	// char hexi[] = "0123456789abcdef0123456789ABCDEF" in case uppercase is speccified, we add 16 to the array index.

	// para la conversion hexadecimal. recibimos el arg como argumento hacemos un write 

int sexi_hexi(long long int num, int base, int cap)
{
	int luminumi;

	luminumi = 0;
	char hexi[] = "0123456789abcdef0123456789ABCDEF";

	if (num > 0)
	{
		sexi_hexi(num / base , base, cap);
		char *aescribir = hexi[num % base + cap];
		write (1, &aescribir, 1);
		luminumi++;
		return luminumi;
	}
}

int charizard (char *charo)
{
	int numilumi;

	numilumi = 0;
	while (charo)
	{
		write(1,&charo,1);
		numilumi++;
	}
}