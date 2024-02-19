#include "Warlock.hpp"

Warlock::Warlock(){

}

Warlock::Warlock(const Warlock& obj) {
	*this = obj;
}

Warlock& Warlock::operator=(const Warlock& obj) {
	if (this != &obj)
	{
		this->name = obj.name;
		this->title = obj.title;
	}
	return *this;
}

Warlock::Warlock(const std::string& name, const std::string& title) {
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day." << std::endl; 
}

Warlock::~Warlock() {
	std::cout << this->name << ": My job here is done!" << std::endl;
	for (std::map<std::string, ASpell*>::iterator it = m.begin(); it != m.end(); ++it) {
		delete it->second;
	}
	// m.clear();
}

const std::string& Warlock::getName() const {
	return this->name;
}

const std::string& Warlock::getTitle() const {
	return this->title;
}

void Warlock::setTitle(const std::string& title) {
	this->title = title;
}

void Warlock::introduce() const{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *obj) {
	if (obj)
	{
		// if (m.find(obj->getName()) == m.end())
			m[obj->getName()] = obj->clone();
	}
}

void Warlock::forgetSpell(std::string name) {
	if (m.find(name) != m.end())
		m.erase(name);
}

void Warlock::launchSpell(std::string name, const ATarget& targ) {
	if (m.find(name) != m.end())
		m[name]->launch(targ);
}