# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_numContact = 0;
}

int	PhoneBook::getNumContact(void) const
{
	return (this->_numContact);
}

void	PhoneBook::setNumContact(int numContact)
{
	this->_numContact = numContact;
}

std::string	PhoneBook::_rightAlignedStr(std::string str) const
{
	std::string	newStr = "";
	int			len;

	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else 
	{
		len = str.length();
		while (len++ < 10)
			newStr += " ";
		newStr += str;
	}
	return (newStr);
}

std::string	PhoneBook::_askValidInput(std::string ask) const
{
	std::string entrade = "";
	
	std::cout << ask;
	std::cin >> entrade;
	while (entrade.empty())
	{
		std::cout << "Invalid, please enter a non empty input";
		std::cout << ask;
		std::cin >> entrade;
		std::cout << std::endl;
	}
	return (entrade);
}

void	PhoneBook::addContact(void)
{
	static int	i;
	Contact		contact;

	std::cout << "\033[1;92m";
	_phoneBook[i % 8].setFirstName(_askValidInput("Enter fisrt name> "));
	_phoneBook[i % 8].setLastName(_askValidInput("Enter last name> "));
	_phoneBook[i % 8].setNickName(_askValidInput("Enter nick name> "));
	_phoneBook[i % 8].setPhone(_askValidInput("Enter phone> "));
	_phoneBook[i % 8].setSecret(_askValidInput("Enter the darkest secret> "));
	_numContact = i % 8;
	std::cout << "\033[1;32m";
	std::cout << _phoneBook[i % 8].getFirstName() << " added correctly :)" << std::endl;
	std::cout << "\033[0m";
	i++;
}

void	PhoneBook::showPhoneBook(void) const
{
	int	i;

	i = -1;
	while (++i < 45)
		std::cout << "-";
	std::cout << std::endl;
	std::cout << "|\t   --MY AWESOME PHONEBOOK--         |"<< std::endl;
	i = -1;
	while (++i < 45)
		std::cout << "-";
	std::cout << std::endl;
	i = -1;
	while (++i < _numContact)
	{
		std::cout << "|";
		std::cout << _rightAlignedStr(std::to_string(i + 1)) << "|";
		std::cout << _rightAlignedStr(_phoneBook[i].getFirstName()) << "|";
		std::cout << _rightAlignedStr(_phoneBook[i].getLastName()) << "|";
		std::cout << _rightAlignedStr(_phoneBook[i].getNickName())<< "|";
		std::cout << std::endl;
	}
	i = -1;
	while (++i < 45)
		std::cout << "-";
	std::cout << std::endl;
}

void	PhoneBook::searchContact(void) const
{
	int	entrade;
	int	validEntrade = 0;

	std::cout << "\033[1;94m";
	showPhoneBook();
	std::cout << "\033[0m";
	do
	{
		std::cout << "Enter the index> ";
		std::cin >> entrade;
		if (std::cin.good() && (entrade >= 1 && entrade <= _numContact))
			validEntrade = 1;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\033[1;31m";
			std::cout << "Error: entrada no válida." << std::endl;
			std::cout << "\033[0m";
		}
	} while (validEntrade == 0);
	std::cout << "\033[1;94m";
	_phoneBook[entrade - 1].showContact();
	std::cout << "\033[0m";
	


}


void	PhoneBook::startPhoneBook(void)
{
	std::string entrade;

	std::cout << "\t--MY AWESOME PHONEBOOK--" << std::endl;
	std::cout << "(ADD)    -> Save a new contact" << std::endl;
	std::cout << "(SEARCH) -> Display a specific contact" << std::endl;
	std::cout << "(EXIT) -> The program ends" << std::endl << std::endl;
	std::cout << "Enter a command> ";
	std::cin >> entrade;
	while (entrade.compare("EXIT"))
	{
		if (!entrade.compare("ADD"))
			addContact();
		else if (!entrade.compare("SEARCH"))
			searchContact();
		else
		{
			std::cout << "\033[1;31m";
			std::cout << "Command not found" << std::endl;
			std::cout << "\033[0m";
		}
		std::cout << "Enter a command> ";
		std::cin >> entrade;
	}
}
