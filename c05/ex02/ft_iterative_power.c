/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:44:20 by matesant          #+#    #+#             */
/*   Updated: 2023/06/15 12:19:13 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{	
		while (power != 0)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}

//#include <stdio.h>

//int	main(void)
//{
//	int	pow;

//	pow = ft_iterative_power(0, 0);
//	printf("%d", pow);
//}