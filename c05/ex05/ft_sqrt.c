/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:40:33 by matesant          #+#    #+#             */
/*   Updated: 2023/06/15 10:46:37 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb > 0)
	{
		while (sqrt * sqrt <= nb)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			else if (sqrt >= 46341)
				return (0);
		sqrt++;
		}
	}
	return (0);
}

//#include <stdio.h>

//int	main(void)
//{
//	int	root;

//	root = ft_sqrt(144);
//	printf("%d", root);
//}