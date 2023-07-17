/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:53:49 by matesant          #+#    #+#             */
/*   Updated: 2023/06/15 10:40:45 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			fac *= nb;
			nb--;
		}
	}
	return (fac);
}

//#include <stdio.h>

//int	main(void)
//{
//	int	a;
//	int	result;

//	a = 1;
//	result = ft_iterative_factorial(a);
//	printf("%d", result);
//}