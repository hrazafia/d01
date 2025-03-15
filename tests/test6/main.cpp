#include <iostream>
 
class MathOperations
{
	public:
    	int add(int a, int b);
	    int subtract(int a, int b);
};

int	MathOperations::add(int a, int b)
{
	return (a + b);
}

int	MathOperations::subtract(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	std::string	func = "addPtr";

    MathOperations math;
    int (MathOperations::*addPtr)(int, int)[2] = {&MathOperations::subtract, &MathOperations::add}; 
     
    int result = (math.*addPtr)(5, 3);
 
    std::cout << "Result of addition: " << func(16, 42) << std::endl;
    return 0;
}
