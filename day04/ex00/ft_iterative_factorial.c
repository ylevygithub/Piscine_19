/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 12:36:38 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/26 10:19:26 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int n;
	int res;

	n = 1;
	res = nb;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	while ((nb > 0) && (n < nb))
	{
		res = res * (nb - n);
		n++;
	}
	return (res);
}

int main()
{
	int f = 0;
	int a = 9;
	int c = 13;
	int t = -4;

	ft_iterative_factorial(f);
	ft_iterative_factorial(a);
	ft_iterative_factorial(c);
	ft_iterative_factorial(t);

	printf("Factorial of %d = 1 || %d\n", f, ft_iterative_factorial(f));
	printf("Factorial of %d = 362880 || %d\n", a, ft_iterative_factorial(a));
	printf("Factorial of %d = 0 || %d\n", c, ft_iterative_factorial(c));
	printf("Factorial of %d = 0 || %d\n\n", t, ft_iterative_factorial(t));
}

