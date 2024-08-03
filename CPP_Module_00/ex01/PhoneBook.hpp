#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <sstream>
# include <limits>

class PhoneBook
{
	private:
		Contact		_phoneBook[8];
		int			_numContact;
		std::string	_askValidInput(std::string ask) const;
		std::string	_rightAlignedStr(const std::string str) const;
		std::string	_intToString(int value) const;

	public:
		PhoneBook();
		int			getNumContact(void) const;
		void		setNumContact(int _new_num);
		void		addContact(void);
		void		searchContact(void) const;
		void		showPhoneBook(void) const;
		void		startPhoneBook(void);
};

#endif
