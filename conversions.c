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

	// le pasaremos como parametros tanto el parametro a imprimir, 
	// como la especificacion de si es capital o no. 
int sexi_hexi(va_list valo, int cap)
{
	char hexi[]= "0123456789abcdef012345678ABCDEF";
	
	while ()
	if (cap)
		hexi[valo % 16]
	else 
		hexi[valo % 16 + 16]
}

	// para imprimir el decimal que haremos? pasar como parametro 
	// implementar la recursion sin incluir la libreria. 
	// 345234525
int decibelly(int belly)
{
	if (belly > 0)
	{
		recursion (belly / 10);
		char *aescribir = belly % 10 + '0';
		write (1, &aescribir, 1);
	}
}

	// lo unico que hasemos será imprimir el decimal con la funcion ft

int charizard (char *charo)
{
	write(1,&charo,1);
}