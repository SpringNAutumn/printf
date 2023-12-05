/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ejemplovar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:21:47 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/11/13 09:21:47 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char *impreso, ...)
{
	int length;
	int i;

    length = 0;
    i = 0;
    va_list args;
    va_start(args, impreso);

    while (impreso[i])
    {
        if (impreso[i] == '%')
        {
            char checko = impreso [++i];
            length += checking_chicks (checko, args);
        }
        impreso ++;
        length ++;
    }
    return length;
}

int checking_chicks (char checko, va_list args)
{
    if (checko == 'x')
       return sexidecihexi(va_arg(args, unsigned int), length, 0);

    else if (checko == 'X')
       return sexidecihexi(va_arg(args, unsigned int), length, 1);

    else if (checko == 'u')
       return sexidecihexi(va_arg(args, unsigned int), length, 2);

    else if (checko == 'i' | checko == 'd')
       return sexidecihexi(va_arg(args, int), length, 3);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   
    else if (checko == '%')
       return charizard(va_arg(args, char *), length, 0);

    else if (checko == 's')
       return charizard(va_arg(args, char *), length, 0);
        
    else if (checko == 'p')
       return charizard(va_arg(args, void *), length, 1);

    else if (checko == 'c')
       return charizard(va_arg(args, char *), length, 0);

}