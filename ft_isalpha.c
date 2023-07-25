/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samatsum  <samatsum@student.42tokyo.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:33:06 by samatsum          #+#    #+#             */
/*   Updated: 2023/06/10 12:53:35 by samatsum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int alpha)
{
	if (alpha < 'A' || alpha > 'z' || (alpha > 'Z' && alpha < 'a'))
	{
		return (0);
	}
	return (1);
}
//#include<stdio.h>
//int main(void)
//{
//	printf("%d", ft_isalpha(47));
//	return (0);
//}
