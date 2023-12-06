/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:24:44 by marvin            #+#    #+#             */
/*   Updated: 2023/12/06 11:24:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main (void)
{
    int numi1 = 123321;
    int numo2 = 431123;
    int hexiCap = 12332;
    int hexiNocap =3141;
    char *charizard = "holabuenastardes";
    char charo = 'o';
    char porcento = '%';
/*
    ft_printf(" el primer numero es: %d y el segundo numero: %d", numi1, numo2);
    ft_printf(" el primer numero es: %X y el segundo numero: %x", hexiCap, hexiNocap);
    ft_printf(" el primer numero es: %c y el segundo numero: %%", charo, porcento);
    ft_printf(" el primer numero es: %s ", charizard);
*/
    ft_printf( "el segundo numero: %p", &porcento);
}