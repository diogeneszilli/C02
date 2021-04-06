/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dludtke- <dludtke-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:24:40 by dludtke-          #+#    #+#             */
/*   Updated: 2021/04/06 18:58:20 by dludtke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int new_word;

	i = 0;
	new_word = 0;
	while (str[i] != '\0')
	{
		if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
			new_word++;
		else if (!new_word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			new_word++;
		}
		else if (new_word > 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if ((str[i] < '0' || str[i] > '9')
						&& (str[i] < 'A' || str[i] > 'Z')
						&& (str[i] < 'a' || str[i] > 'z'))
			new_word = 0;
		i++;
	}
	return (str);
}
