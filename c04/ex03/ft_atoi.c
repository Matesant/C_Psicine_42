/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:58:44 by matesant          #+#    #+#             */
/*   Updated: 2023/06/13 11:21:04 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	indx;
	int	multp;
	int	numb;

	indx = 0;
	numb = 0;
	multp = 1;
	while (((str[indx] >= 9) && (str[indx] <= 13)) || (str[indx] == ' '))
	{
		indx++;
	}
	while ((str[indx] == '-') || (str[indx] == '+'))
	{
		multp *= -1;
		indx++;
	}
	while ((str[indx] >= '0') && (str[indx] <= '9'))
	{
		numb = numb * 10 + (str[indx] - '0');
		indx++;
	}
	numb *= multp;
	return (numb);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "-------24441mmmm4748mmm3647";

	printf("antes: %s\n\n", str);
	printf("depois da função: %d", ft_atoi(str));
	return (0);
}*/