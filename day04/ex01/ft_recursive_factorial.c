/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 19:22:43 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/23 23:47:56 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return(0);
	else if (nb == 1 || nb == 0)
		return(1);

	if (nb > 0)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return(nb);
}

int main()
{
	int f = 0;
	int a = 9;
	int c = 13;
	int t = -4;

	ft_recursive_factorial(f);
	ft_recursive_factorial(a);
	ft_recursive_factorial(c);
	ft_recursive_factorial(t);

	printf("Factorial of %d = 1 || %d\n", f, ft_recursive_factorial(f));
	printf("Factorial of %d = 362880 || %d\n", a, ft_recursive_factorial(a));
	printf("Factorial of %d = 0 || %d\n", c, ft_recursive_factorial(c));
	printf("Factorial of %d = 0 || %d\n\n", t, ft_recursive_factorial(t));
}
