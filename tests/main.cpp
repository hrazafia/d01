#include <iostream>
#include <string>

void	strReplace(std::string &str, const std::string &substr, const std::string &newstr)
{
	size_t	pos = 0;
	size_t	offset = 0;

	pos = str.find(substr, offset);
	while (pos != str.npos)
	{
		str.erase(pos, substr.length());
		str.insert(pos, newstr);
		offset = pos + newstr.length();
		pos = str.find(substr, offset);
	}
}

int	main(int argc, char **argv)
{
	std::string	find;
	std::string	replace;
	std::string	str;

	if (argc != 4)
		return (1);
	find = argv[2];
	replace = argv[3];
	str = argv[1];
	strReplace(str, find, replace);
	std::cout << str << std::endl;
	return (0);
}
