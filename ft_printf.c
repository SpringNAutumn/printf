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

// printing simple. Vamos a implementar con caracteres sentinel un printf simple.
// el printf irá recorriendo la cadena principal e irá llamando a las siguientes funciones 
// hasta que la cadena se acabe.

int ft_printf(char *impreso, ...)
{
	int length;
	int i;
    va_list args;
    va_start(args, impreso);

	// empezamos a leer el string. 
    while (impreso[i])
    {	
        if (impreso[i] == '%')
        {
            char check_chicks = impreso[++i];
            checking_chicks(check_chicks, args);
            i ++;
        }
        write (1, impreso, 1);
        length++;
    }
    return length;
}

int checking_chicks(char checking_chicks, va_list valu)
{
    if(checking_chicks == 'X')
        sexi_hexi(va_arg(valu, unsigned int),16,16);

    if(checking_chicks == 'x')
        sexi_hexi(va_arg(valu, unsigned int),16,0);

    if(checking_chicks== 'u')
        sexi_hexi(va_arg(valu, unsigned int),10,0);

    if(checking_chicks == 'i' | 'd')
        sexi_hexi(va_arg(valu, int),10,0);

    if(checking_chicks == '%')
        charizard(valu);

    if(checking_chicks == 's')
        charizard(valu);

    if(checking_chicks == 'p')
    {
        write(1,'0x0',3);
        sexihexi(va_arg(valu,long long int),16,0);
    }
    if(checking_chicks== 'c')
        charizard(valu);
}