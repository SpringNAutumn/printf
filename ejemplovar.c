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
            char *check_chicks = va_arg(args, char *);

            impreso ++;
        }
        write (1, impreso, 1);
        impreso++;
        sum++;
    }
    return sum;
}

void checking_chicks (char *binge)
{
    // comprobamos conversiones. 
    // aqui va a entrar en cada funcion del fichero correspondiente

    // a las funciones le deberemos pasar tanto 
    // el decimal como el va_args a imprimir 

    if(binge == 'X')
        sexihexi();

    if(binge == 'x')
        sexihexi();

    if(binge == 'u')
        decibelly();

    if(binge == 'i' | 'd')
        decibelly();

    // para imprimir el porcentaje podemos hacer un simple putchar?
    if(binge == '%')
        charizard();
    // para imprimir el string lo unico que deberemos 
    // hacer es un putchar hasta que llegemos al final de la cadena.
    if(binge == 's')
        charizard();
        
    //¿ que podemos hacer para imprimir el puntero? 
    if(binge == 'p')
    


// lo mismo, para imprimir caracter haremos un simple putchar. 
    if(binge == 'c')
             



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
// hemos conseguido programar una funcion que coge una cadena. y lee argumentos de la funcion cuando encuentra un caracter sentinel.

// tenemos que hacer que lea el siguiente caracter del caracter sentinel y dependiendo del tipo de caracter escriba una czprintinininf

// Implementacion del hexadecimal. Con uppercase y lowecase. 
	// no se puede