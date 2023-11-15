/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebasprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:12:39 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/11/13 10:12:39 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main (void)
{
	int prueba;
	
	prueba = 342342424;
	printf("%i\n", prueba);
	printf("%x\n",prueba);
	printf("%X\n",prueba);
	printf("%d\n",prueba);
	printf("%u\n",prueba);
}