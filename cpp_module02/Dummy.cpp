#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {

}


Dummy::Dummy(const Dummy& obj) {
	*this = obj;
}

Dummy& Dummy::operator=(const Dummy& obj) {
	if (this != &obj)
		ATarget::operator=(obj);
	return *this;
}

Dummy::~Dummy() {

}

ATarget* Dummy::clone() const{
	return new Dummy();
}