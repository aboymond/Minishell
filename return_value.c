/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:22:45 by ggentil           #+#    #+#             */
/*   Updated: 2022/11/09 20:44:48 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	ret(char *msg, int ret, int num)
{
	g_ret = ret;
	if (num == 0)
	{
		if (msg != NULL)
			printf("%s\n", msg);
	}
	if (num == 1)
	{
		if (msg != NULL)
			printf("minishell: %s: command not found\n", msg);
	}
	g_ret = 0;
	return (0);
}
