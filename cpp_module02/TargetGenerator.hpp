#pragma  once

#include "ASpell.hpp"
#include "SpellBook.hpp"
#include <iostream>
#include <algorithm>
#include <map>

class TargetGenerator {
	private :
		TargetGenerator(const TargetGenerator& obj);
		TargetGenerator& operator=(const TargetGenerator& obj);
		std::map < std::string, ATarget*> target;
	public :
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget* obj);
		void forgetTargetType(std::string const &name);
		ATarget* createTarget(std::string const &name);
};