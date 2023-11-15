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

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

// printing simple. Vamos a implementar con caracteres sentinel un printf simple.

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
             char *vamoninio = va_arg(args, char *);
             while(*vamoninio)
             {
                write (1, vamoninio, 1);
                vamoninio++;
             }
             impreso ++;
        }
        write (1, impreso, 1);
        impreso++;
        sum++;
    }
    return sum;
}

/*
	int main()
	{

    	char *str1 = "loco ";
    	char *str2 = " motora";
    	char *str3 = " loco";
    	prining("hola buenas%tardes % que tal% estas", str1, str2, str3);

    	return 0;
	}
*/

int main()
{
    int octal = 23232;
    printf("%i", octal);
    return 0;
}

// hemos conseguido programar una funcion que coge una cadena. y lee argumentos de la funcion cuando encuentra un caracter sentinel.

// tenemos que hacer que lea el siguiente caracter del caracter sentinel y dependiendo del tipo de caracter escriba una czprintinininf

// Implementacion del hexadecimal. Con uppercase y lowecase. 
	// no se puede