#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects) {
	this->name = name;
	this->effects = effects;
}

ASpell::ASpell() {

}

// ASpell::ASpell(const ASpell& obj) {
// 	*this = obj;
// }

// ASpell& ASpell::operator=(const ASpell& obj) {
// 	if (this != &obj) {
// 		name = obj.name;
// 		effects = obj.effects;
// 	}
// 	return *this;
// }

ASpell::~ASpell() {

}

const std::string& ASpell::getName() const{
	return this->name;
}

const std::string& ASpell::getEffects() const{
	return this->effects;
}



void ASpell::launch(const ATarget& obj) const {
	obj.getHitBySpell(*this);
}