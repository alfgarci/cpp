#include "MySed.hpp"

MySed::MySed(std::string filename) : _file(filename)
{
	this->_replaceFile = this->_file + ".replace";
}

void	MySed::replace(std::string toFind, std::string replace)
{
	std::ifstream infile(this->_file);

	if (infile.is_open())
	{
		std::string tmpStr;
		if (std::getline(infile, tmpStr, '\0'))
		{
			size_t pos = tmpStr.find(toFind);
			while (pos != std::string::npos)
			{
				tmpStr.erase(pos, toFind.length());
				tmpStr.insert(pos, replace);
				pos = tmpStr.find(toFind);
			}
			std::ofstream outfile(this->_replaceFile);
			outfile << tmpStr;
			outfile.close();
		}
		else
			std::cout << "Empty file :(" << std::endl;
		infile.close();
	}
	else
		std::cout << "Can't open the file :(" << std::endl;
}