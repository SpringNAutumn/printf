/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebasprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:12:39 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/11/30 20:38:39 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main (void)
{
	int prueba;
	
	prueba = 342342424;
	ft_printf("%i\n", prueba);
	ft_printf("%X\n", prueba);
	ft_printf("%x\n", prueba);
	ft_printf("%s\n", prueba);
	ft_printf("%d\n", prueba);
	ft_printf("%i\n", prueba);
	ft_printf("%u\n", prueba);
	
}
