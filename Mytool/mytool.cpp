#include <string> // find, string, npos
#include <iostream> // cout

void replace_with_star(const std::string & string, const std::string & substring);

int main(int argc, char** argv)
{

	if(argc < 3)
	{
		std::cout << "Too few args" << std::endl;
		return -1;
	}

	std::string 	str 	  = std::string(argv[1]);
	std::string 	substring = std::string(argv[2]);

	replace_with_star(str, substring);
}

void replace_with_star(const std::string & string, const std::string & substring)
{
	int length = string.length();	
	int sub_length = substring.length();
	
	int n = -1;
	int prev = 0;

	while(n < length)
	{
		n = string.find(substring, n + 1);
		if(n == int(std::string::npos))
		{
			for(int i(prev); i < length; ++i)
			{
				std::cout << string[i];
			}
			break;
		}
		
		for(int i(prev); i < n; ++i)
		{
			std::cout << string[i];
		}
		std::cout << substring;
		std::cout << "*";
		prev = n + sub_length;
	}
	std::cout << std::endl;
}





