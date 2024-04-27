#include "Contact.hpp"

std::string	Contact::getFirstName(void) const
{
	return (this->_fisrtName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->_nickName);
}

std::string	Contact::getPhone(void) const
{
	return (this->_phone);
}

std::string	Contact::getSecret(void) const
{
	return (this->_secret);
}

void	Contact::setFirstName(std::string fisrtName)
{
	this->_fisrtName = fisrtName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName	= lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}

void	Contact::setPhone(std::string phone)
{
	this->_phone = phone;
}

void	Contact::setSecret(std::string secret)
{
	this->_secret = secret;
}

void	Contact::showContact() const
{
	std::cout << "Fisrt Name: " << this->_fisrtName << std::endl;
	std::cout << "Last Name: " << this->_lastName << std::endl;
	std::cout << "Nick Name: " << this->_nickName << std::endl;
	std::cout << "Phone: " << this->_phone << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
}