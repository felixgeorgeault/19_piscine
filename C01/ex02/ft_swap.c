<<<<<<< HEAD
#include <stdio.h>

void	ft_swap(int *ptra, int *ptrb)
{
	int	c;
	
	c = *ptra;
	*ptra = *ptrb;
	*ptrb = c;	
}

int	main(void)
{
	int	a = 0;
	int	b = 1;

	int	*ptra;
	int	*ptrb;

	ptra = &a;
	ptrb = &b;

	printf("%d %d \n", a, b);
	ft_swap(ptra, ptrb);
	printf("%d %d \n", a, b);
	return (0);
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:51:20 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/11 13:26:52 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
>>>>>>> bd2d80057e30deff18e0f65f424a2dcdfa07f724
}
