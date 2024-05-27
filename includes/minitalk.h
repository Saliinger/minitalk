/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:19:28 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/20 18:19:28 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

// ---Lib---
# include "../libft/libft.h"
# include <signal.h>
# include <sys/types.h>

//---Variables---
#define CLIENT 0
#define SERVER 1

//---Structure---
typedef struct s_client
{
	pid_t					pid;
	char					*message;
	int						bit;
	int						bit_received;
	char					*current_char;
	struct s_client			*next;
}	t_client;

//---Server---
void		server_handler(int signum, siginfo_t *info, void *context);
void		extend_handler(t_client *current_client, pid_t current_pid, \
t_client **waitlist);
t_client	**init_waitlist(void);
void		print_message(t_client *client, t_client **waitlist);
void		add_client(t_client **waitlist, pid_t pid);
t_client	*find_client(pid_t client, t_client **list);
void		free_waitlist(t_client **waitlist);
void		remove_client(t_client *to_remove, t_client **waitlist);

//---t_client---
void		ft_send_char(char c, pid_t server_pid);
void		ft_send_message(char *str, pid_t server_pid);
void		client_handler(int sig);

//---Function---
void		ft_error(int i);
void		ft_banner(int i, pid_t pid);

#endif