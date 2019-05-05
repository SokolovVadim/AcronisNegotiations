#include <string>
#include <iostream>

void replace_with_star(const std::string & string, const std::string & substring)
{
	int length = string.length();
	
	int sub_length = substring.length();
	int n = -1;
	int prev = 0;
	
	std::cout << "n = " << n << std::endl;
	
	// std::vector<int> pos(10);
	while(n < length)
	{
		// std::string cpstring(&(string.c_str()[n]));
		// std::cout << "1111" << std::endl;

		n = string.find(substring, n + 1);
		// std::cout << "n = " << n << std::endl;
		if(n == int(std::string::npos))
		{
			for(int i(prev); i < length; ++i)
			{
				std::cout << string[i];
			}
			break;
			// std::cout << string.substr(n) << std::endl;
		}
		// string.replace(n, sub_length, "*");
		for(int i(prev); i < n; ++i)
		{
			std::cout << string[i];
		}
		std::cout << substring;
		std::cout << "*";
		prev = n + sub_length;

		// string = std::string(&(string.c_str()[n]));
		
	}
	std::cout << std::endl;
	// std::cout << string << std::endl;
}


int main(int argc, char** argv)
{

	if(argc < 3)
	{
		std::cout << "Too few args" << std::endl;
		return -1;
	}

	// std::cout << "Hello world!" << std::endl;
	//std::string str = std::string(argv[1]);
	// std::cout << str << std::endl;
	// std::cout << "str.c_str() = " << str.c_str() << std::endl;

	std::string str = std::string(argv[1]);
	std::string 	substring = std::string(argv[2]);

	std::cout << "********************" << std::endl;

	
	replace_with_star(str, substring);
}





