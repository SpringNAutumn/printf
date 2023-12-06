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
#include <stdio.h>


int ft_printf(char *impreso, ...)
{
	int length;
	int i;
   char checko;

   length = 0;
   i = 0;
   va_list args;
   va_start(args, impreso);

   while (impreso[i])
   {
      if (impreso[i] == '%')
      {
         checko = impreso [++i];
         length += checking_chicks (checko, args);
      }
      else
      {
         write(1, &impreso[i], 1);
         length ++;
      }
      i ++;
   }
   return length;
}
 
int checking_chicks (char checko, va_list args)
{
    if (checko == 'x')
       return sexidecihexi(va_arg(args, unsigned int), 0);
    else if (checko == 'X')
       return sexidecihexi(va_arg(args, unsigned int), 1);
    else if (checko == 'u')
       return sexidecihexi(va_arg(args, unsigned int), 2);
    else if (checko == 'i' || checko == 'd')
       return sexidecihexi(va_arg(args, int), 3);
    else if (checko == '%' || checko == 'c')
       return singlecharizard(va_arg(args, int));
    else if (checko == 's')
       return charizard(va_arg(args, char *));
    else if (checko == 'p')
    {
      write (1,"0x", 2);
       return 2 + sexidecihexi(va_arg(args, size_t), 1);
    }
    else return 0;
}