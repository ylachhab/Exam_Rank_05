#include "SpellBook.hpp"

SpellBook::SpellBook(){

}

SpellBook::SpellBook(const SpellBook& obj) {
	*this = obj;
}

SpellBook& SpellBook::operator=(const SpellBook& obj) {
	book = obj.book;
	return *this;
}


SpellBook::~SpellBook() {
	for (std::map<std::string, ASpell*>::iterator it = book.begin(); it != book.end(); ++it) {
		delete it->second;
	}
	// book.clear();
}

void SpellBook::learnSpell(ASpell *obj) {
	if (obj)
	{
		book[obj->getName()] = obj->clone();
	}
}

void SpellBook::forgetSpell(std::string const& name) {
	if (book.find(name) != book.end())
	{
		book.erase(name);
	}
}

ASpell* SpellBook::createSpell(std::string const & name) {
	ASpell* tmp = NULL;
	if (book.find(name) != book.end())
		tmp = book[name];
	return tmp;
}