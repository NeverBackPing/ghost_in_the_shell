#include <../includes/minishell.h>

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
		printf("%s\n", prompt);
		free(prompt);
	}
}
