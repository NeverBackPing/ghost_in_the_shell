#include <../includes/minishell.h>


void sigint_handler(int signal)
{
	if (signal == SIGINT)
		printf("\n");
}

void	signal_action(t_minishell *minishell)
{
	t_signal	*signal;

	signal = minishell->signal;
	ft_bzero(&signal, sizeof(signal));
	signal->handle = &sigint_handler;
	sigaction(SIGINT, signal->handle, NULL);
}