#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <algorithm>
#include <map>

class SpellBook {
	private :
		SpellBook(const SpellBook& obj);
		SpellBook& operator=(const SpellBook& obj);
		std::map < std::string, ASpell*> book;
	public :
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *obj);
		void forgetSpell(std::string const & name);
		ASpell* createSpell(std::string const & name);
};