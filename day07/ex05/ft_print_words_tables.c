void ft_putchar(char c);

void ft_print_words_tables(char **tab)
{
	int j;
	int i;
	if(!tab)
		return ;
	while(tab[i] != 0 && tab[i] != (char*)33)
	{
		j = 0;
		while(tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
