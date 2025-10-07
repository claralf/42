void	ft_putnbr_fd(int n, int fd)
{
	if (n = -2147483648)
	{	
		write(1, "-2147483648", 11);
		return;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	
}
