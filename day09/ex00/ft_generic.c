#include <unistd.h>

void	ft_generic(void)
{
	char *c; 
	int i;

	c = "Tu tu tu tu ; Tu tu tu tu\n";
	i = 0;
	while(c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
}
