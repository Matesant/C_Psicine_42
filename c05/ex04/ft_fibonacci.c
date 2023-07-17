/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:21:10 by matesant          #+#    #+#             */
/*   Updated: 2023/06/15 10:46:47 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

//#include <stdio.h>

//int	main(void)
//{
//	int	result_fibo;

//	result_fibo = ft_fibonacci(8);
//	printf("%d", result_fibo);
//}