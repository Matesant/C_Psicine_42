/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:39:19 by matesant          #+#    #+#             */
/*   Updated: 2023/06/12 08:59:49 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) && i < n - 1)
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char s1[] = "d"; 
	char	s2[] = "dzuzetreze";
	printf("%d", ft_strncmp(s1, s2, 1));
}*/