#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string	_fisrtName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phone;
		std::string	_secret;
	public:
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getPhone(void) const;
		std::string	getSecret(void) const;
		void		setFirstName(std::string fisrtName);
		void		setLastName(std::string lastName);
		void		setNickName(std::string nickName);
		void		setPhone(std::string phone);
		void		setSecret(std::string secret);
		void		showContact() const;
};

#endif
