/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ejemplovar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/11/13 09:21:47 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/11/13 09:21:47 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(char const *impreso, ...)
{
	int		length;
	char	checko;
	va_list	args;

	length = 0;
	va_start(args, impreso);
	while (*impreso)
	{
		if (*impreso == '%')
		{
			checko = *(++impreso);
			length += checking_chicks(checko, args);
			impreso++;
		}
		else
		{
			write(1, impreso, 1);
			length++;
			impreso++;
		}
	}
	va_end(args);
	return (length);
}

int	checking_chicks(char checko, va_list args)
{
	if (checko == 'x')
		return (sexihexi(va_arg(args, unsigned int), 0));
	else if (checko == 'X')
		return (sexihexi(va_arg(args, unsigned int), 1));
	else if (checko == 'u')
		return (sexideci(va_arg(args, unsigned int)));
	else if (checko == 'i' || checko == 'd')
		return (sexideci(va_arg(args, int)));
	else if (checko == '%')
		return (singlecharizard('%'));
	else if (checko == 'c')
		return (singlecharizard(va_arg(args, int)));
	else if (checko == 's')
		return (charizard(va_arg(args, char *)));
	else if (checko == 'p')
	{
		write(1, "0x", 2);
		return (2 + sexihexi(va_arg(args, unsigned long long int), 0));
	}
	else
		return (-1);
}
