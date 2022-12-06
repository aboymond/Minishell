/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:25:40 by ggentil           #+#    #+#             */
/*   Updated: 2022/11/09 19:25:41 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	error_quote(void)
{
	ret("syntax error near unexpected token quote", 258, 0);
	return (-1);
}
