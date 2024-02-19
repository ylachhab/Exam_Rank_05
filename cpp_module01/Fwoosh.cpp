#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed"){
}

// Fwoosh::Fwoosh(const Fwoosh& obj) {
// 	*this = obj;
// }

// Fwoosh& Fwoosh::operator=(const Fwoosh& obj) {
// 	if (this != &obj) 
// 		ASpell::operator=(obj);
// 	return *this;
// }

Fwoosh::~Fwoosh() {

}

ASpell* Fwoosh::clone() const{
	return new Fwoosh();
}
