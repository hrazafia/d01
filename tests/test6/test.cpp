#include <iostream>

void	hello(void)
{
	std::cout << "Hello, world!" << std::endl;
}

int	main(void)
{
	std::string	func = "hello";

	func();
	return (0);
}
