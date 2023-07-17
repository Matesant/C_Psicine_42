/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:56:50 by matesant          #+#    #+#             */
/*   Updated: 2023/06/06 15:02:18 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	num1 = 7;
// 	num2 = 32;
// 	ft_swap(&num1, &num2);
// 	printf("inteiro de a é 7 e agora é: %d\n", num1);
// 	printf("inteiro de b é 32 e agora é: %d\n", num2);
// }
