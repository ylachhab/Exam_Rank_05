#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "ASpell.hpp"
#include <iostream>
#include <algorithm>
#include <map>

class Warlock {
	private :
		std::string name;
		std::string title;
		std::map<std::string, ASpell *> m;
		Warlock();
		Warlock(const Warlock& obj);
		Warlock& operator=(const Warlock& obj);
	public :
		Warlock(const std::string& name, const std::string& title);
		~Warlock();
		const std::string& getName() const;
		const std::string& getTitle() const;
		void setTitle(const std::string& title);
		void introduce() const;
		void learnSpell(ASpell *obj);
		void forgetSpell(std::string name);
		void launchSpell(std::string name, const ATarget& targ);
};

#endif