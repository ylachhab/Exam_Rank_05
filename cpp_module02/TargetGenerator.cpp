#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){

}

TargetGenerator::TargetGenerator(const TargetGenerator& obj) {
	*this = obj;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& obj) {
	(void)obj;
	return *this;
}


TargetGenerator::~TargetGenerator() {
}


void TargetGenerator::learnTargetType(ATarget* obj) {
	if (obj)
	{
		target[obj->getType()] = obj->clone();
	}
}

void TargetGenerator::forgetTargetType(std::string const& name) {
	if (target.find(name) != target.end())
		target.erase(name);
}

ATarget* TargetGenerator::createTarget(std::string const &name) {
	ATarget* tmp = NULL;
	if (target.find(name) != target.end())
		tmp = target[name];
	return tmp;
}