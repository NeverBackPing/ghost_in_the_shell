#include <../includes/minishell.h>

void	ft_check_prompt(char *prompt)
{
	int	i = 0;
	while (prompt[i] != '\0')
	{
		printf("String: %s : char : %c\n", prompt, prompt[i]);
		i++;
	}
}

int main(void)
{
	char	*prompt;

	while (1)
	{
		prompt = readline("GhostInTheShell> ");
		if (prompt == NULL)
		{
			printf("\nExiting.\n");
			break ;
		}
		if (*prompt != '\0')
			add_history(prompt);
		ft_check_prompt(prompt);
		free(prompt);
	}
}
