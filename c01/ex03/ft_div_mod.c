/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:20:31 by matesant          #+#    #+#             */
/*   Updated: 2023/06/06 15:03:01 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 6;
// 	b = 6;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("a divisao de a por b é : %d\n", div);
// 	printf("o modulo de a por b é : %d\n", mod);
// }
