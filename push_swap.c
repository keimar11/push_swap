void	convert_int_arr(int amt, char **arr)
{
	int *int_arr;
	int	cnt;

	int_arr = (int *)malloc(sizeof(int) * amt);
	cnt = 0;
	while (cnt < amt)
	{
		int_arr[cnt] = 	//atoiとは異なる関数で文字をはじいて数字だけ変換
		cnt++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	convert_int_arr(argc, argv);
	return (1);
}
