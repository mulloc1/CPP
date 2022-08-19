#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{

	if (argc != 4)
	{
		std::cout << "the argc is invalid\n";
		return (0);
	}
	std::string	filename(argv[1]);
	std::string	oldStr(argv[2]);
	std::string	newStr(argv[3]);
	std::ifstream	oldFile(filename);
	
	if (oldStr == newStr)
	{
		std::cout << "oldStr and newStr is equal\n";
		return (0);
	}
	if (oldFile.is_open())
	{
		std::ofstream	newFile(filename + ".replace");
		std::string str;
		while (getline(oldFile, str))
		{
			while (1)
			{
				int	startIndex = str.find(oldStr);
				if (startIndex == -1)
					break ;
				for (unsigned long i = 0; i < oldStr.length(); i++)
					str.erase(str.begin() + startIndex);
				str.insert(startIndex, newStr, 0, newStr.length());
			}
			newFile << str + '\n';
		}
		newFile.close();
	}
	else
		std::cout << "the filename is invalid\n";
	oldFile.close();
}
