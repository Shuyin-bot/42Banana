/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:23:32 by lsalkic           #+#    #+#             */
/*   Updated: 2025/08/17 00:19:04 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[0] && str[0] <= 'z')
			str[0] = str[0] - 32;
		else if ((str[i - 1] == ' ' || str[i - 1] == '+' || str[i - 1] == '-')
			&& 'a' <= str[i] && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (('A' <= str[i] && str[i] <= 'Z') && ((str[i - 1] != ' '
					|| str[i - 1] != '+' || str[i - 1] != '-') && ('A' <= str[i
						- 1] && str[i - 1] <= 'Z')))
			str[i] = str[i] + 32;
		else if ('A' <= str[i] && str[i] <= 'Z'
			&& str[i - 1] >= 48 && str[i - 1] <= 57)
		{
			str[i] = str[i] +32;
		}
		else if (('A' <= str[i] && str[i] <= 'Z') && 'a' <= str[i - 1] && str[i
				- 1] <= 'z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
//
//int	main(void)
//{
//	char	String[] = "Hallo ich heisse lknasd;mjasd 42max 42Max -;sd";
//
//	printf("%s", ft_strcapitalize(String));
//}
