#include <string>
#include <iostream>

void replace_with_star(std::string & string, const std::string & substring)
{
	std::size_t length = string.length();
	// std::cout << "length = " << length << std::endl;
	std::size_t sub_length = substring.length();
	std::string::size_type n = 0;
	// std::vector<int> pos(10);
	while(n < length)
	{
		// std::string cpstring(&(string.c_str()[n]));
		// std::cout << "cpstring = " << cpstring << std::endl;

		n = string.find(substring);
		// std::cout << "n = " << n << std::endl;
		if(n == std::string::npos)
		{
			break;
			// std::cout << string.substr(n) << std::endl;
		}
		string.replace(n, sub_length, "*");
		

		// string = std::string(&(string.c_str()[n]));
		
	}
	// std::cout << std::endl;
	std::cout << string << std::endl;
}


int main(int argc, char** argv)
{

	if(argc < 3)
	{
		std::cout << "Too few args" << std::endl;
		return -1;
	}

	// std::cout << "Hello world!" << std::endl;
	std::string str = std::string(argv[1]);
	// std::cout << str << std::endl;
	// std::cout << "str.c_str() = " << str.c_str() << std::endl;

	std::string 	substring = std::string(argv[2]);

	/*
	std::string::size_type n = str.find(substring);
	std::cout << "n = " << n << std::endl;

	if(n != std::string::npos)
	{
		std::cout << str.substr(n) << std::endl;
	}

	std::cout << "********************" << std::endl;

	
	str.replace(5, 1, "*");
	std::cout << "replaced str = " << str << std::endl;

	std::cout << "********************" << std::endl;

	for(size_t i(0); i < n; i++)
		std::cout << str[i];
	std::cout << "*";
	for(size_t i(n + substring.length()); i < str.length(); ++i)
	{
		std::cout << str[i];
	}
	std::cout << std::endl;
	*/
	std::cout << "********************" << std::endl;
	replace_with_star(str, substring);
}





