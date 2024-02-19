#include "ATarget.hpp"

ATarget::ATarget() {

}

ATarget::ATarget(const std::string& type) {
	this->type = type;
}

ATarget::ATarget(const ATarget& obj) {
	*this = obj;
}

ATarget& ATarget::operator=(const ATarget& obj) {
	if (this != &obj) {
		type = obj.type;
	}
	return *this;
}

ATarget::~ATarget() {

}

const std::string& ATarget::getType() const{
	return type;
}

void ATarget::getHitBySpell(const ASpell& obj) const {
	std::cout << this->type << " has been " << obj.getEffects() << "!" << std::endl;
}