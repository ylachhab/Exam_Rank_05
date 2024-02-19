#ifndef Fwoosh_HPP
#define Fwoosh_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell {
	public :
		Fwoosh();
		~Fwoosh();
		// Fwoosh(const std::string& type);
		// Fwoosh(const Fwoosh& obj);
		// Fwoosh& operator=(const Fwoosh& obj);
		ASpell* clone() const;
};

#endif