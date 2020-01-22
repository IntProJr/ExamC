/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosalee <lrosalee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:25:40 by lrosalee          #+#    #+#             */
/*   Updated: 2020/01/22 18:25:40 by lrosalee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(char *str)
{
	int nb;
	int div;

	div = 2;
	nb = atoi(str);
	if (nb == 1)
		return ;
	while (div <= nb)
	{
		if (nb % div == 0)
		{
			printf("%d", div);
			if (nb == div)
				return ;
			printf("*");
			nb = nb / div;
			div = 1;
		}
		div++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		ft_fprime(argv[1]);
	printf("\nHello, ft_fprime\n");
	return 0;
}
