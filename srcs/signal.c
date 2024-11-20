#include <../includes/minishell.h>

void	ft_sig_handler(int signal)
{
	(void)signal;
	printf("\n");
	rl_replace_line("", 0);
	rl_on_new_line();
	rl_redisplay();
}


void	main_signal(void)
{
	signal(SIGINT, ft_sig_handler);
	signal(SIGQUIT, SIG_IGN);
}
