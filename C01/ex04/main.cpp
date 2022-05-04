#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	std::string		filename(argv[1]);
	std::string		oldStr(argv[2]);
	std::string		newStr(argv[3]);
	std::ifstream	oldFile(filename);
	std::ofstream	newFile(filename + ".replace");

	if (argc != 4)
		return (0);
	if (oldFile.is_open() && newFile.is_open())
	{
		std::string str;
		while (getline(oldFile, str))
		{
			while (1)
			{
				int	startIndex = str.find(oldStr);
				if (startIndex == -1)
					break ;
				for (unsigned long i = 0; i < newStr.length(); i++)
					str.erase(str.begin() + startIndex);
				str.insert(startIndex, newStr, 0, newStr.length());
			}
			newFile << str + '\n';
		}
	}
	oldFile.close();
	newFile.close();
}
