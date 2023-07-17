/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:08:45 by matesant          #+#    #+#             */
/*   Updated: 2023/06/15 10:39:30 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}

//#include <stdio.h>

//int	main(void)
//{
//	int	resul;

//	resul = ft_recursive_factorial(10);
//	printf("%d", resul);
//}