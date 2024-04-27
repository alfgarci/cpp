#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class MySed
{
	private:
		std::string	_file;
		std::string _replaceFile;
	public:
		MySed(std::string filename);
		void	replace(std::string toFind, std::string replace);
};

#endif