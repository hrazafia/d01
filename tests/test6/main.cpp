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
    MathOperations math;
    
    int (MathOperations::*addPtr[2])(int, int) = {&MathOperations::subtract, &MathOperations::add}; 
     
    int result = addPtr[0](5, 3);
 
    std::cout << "Result of addition: " << func(16, 42) << std::endl;
    return 0;
}
