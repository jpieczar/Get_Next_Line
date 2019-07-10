/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 08:24:05 by jpieczar          #+#    #+#             */
/*   Updated: 2019/07/03 08:22:48 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# define BUFF_SIZE 100
# include <stdlib.h>
# include "./libft/libft.h"
# include <fcntl.h>
# include <unistd.h>

int	get_next_line(const int fd, char **line);

#endif
