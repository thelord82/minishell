/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:59:08 by malord            #+#    #+#             */
/*   Updated: 2022/09/29 16:02:37 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*shell_read_line(void)
{
	char	*line;

	line = readline("minishell> ");
	return (line);
}

/*char	*get_paths_command(char **envp, char *cmd)
{
	int		i;
	char	**paths;
	char	*cmd_path;
	char	*temp;

	i = check_envp(envp);
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (paths[i++])
	{
		temp = ft_strjoin(paths[i], "/");
		cmd_path = ft_strjoin_free(temp, cmd);
		if (access(cmd_path, F_OK | X_OK) == 0)
			return (cmd_path);
		free(cmd_path);
	}
	i = 0;
	//free_paths(paths, i);
	//free(paths);
	return (NULL);
}

void	exec_command(char **envp, char *arg)
{
	char	*cmd_path;
	char	**cmd;
	int		i;

	i = 0;
	cmd = ft_split(arg, ' ');
	cmd_path = get_paths_command(envp, cmd[0]);
	if (!cmd_path)
	{
		write(2, "command not found: ", 20);
		while (cmd[i++])
		{
			write(2, cmd[i], ft_strlen(cmd[i]));
			write(2, " ", 1);
			free(cmd[i]);
		}
		free(cmd);
		write(2, "\n", 1);
		exit (0);
	}
	execve(cmd_path, cmd, envp);
	exit(0);
}

int	check_envp(char **envp)
{
	int	i;

	i = 0;
	while (ft_strncmp(envp[i], "PATH=", 5) != 0 && envp[i])
	{
		i++;
		if (envp[i] == NULL)
		{
			write(2, "No environment variables found\n", 27);
			exit(0);
		}
	}
	return (i);
}

char	**shell_split_line(char *line)
{
	int		bufsize;
	char	**tokens;

	bufsize = 128;
	tokens = ft_calloc(sizeof(char *), bufsize);
	if (!tokens)
	{
		perror("Memory allocation error\n");
		exit (0);
	}
	tokens = ft_split(line, ' ');
	return (tokens);
}*/

void	ft_echo(char *line)
{
	line += 5;
	printf("%s\n", line);
}

void	check_builtins(char *line)
{
	// char	*err;
	
	while (ft_isspace(*line) == 1)
		line++;
	if (ft_strncmp(line, "echo", 4) == 0)
	{
		ft_echo(line);
	}
	else
	{
		write(2, "minishell: ", 11);
		write(2, line, ft_strlen(line));
		write(2, ": command not found\n", 20);
	}
}

void	run_minishell(void)
{
	char	*line;
	//char	**args;
	int		status;
	//int 	i = 0;

	status = 1;
	while (status)
	{
		line = shell_read_line();
		check_builtins(line);
	}
}

int	main(int argc, char **argv)
{
	if (argc >= 1 && argv[0] != NULL)
		run_minishell();
}
