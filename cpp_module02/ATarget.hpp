#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"
class ASpell;

class ATarget{
	protected:
		std::string type;
	public :
		ATarget();
		ATarget(const std::string& type);
		ATarget(const ATarget& obj);
		ATarget& operator=(const ATarget& obj);
		virtual ~ATarget();
		const std::string& getType() const;
		void getHitBySpell(const ASpell& obj) const;
		virtual ATarget* clone() const = 0;
};

#endif