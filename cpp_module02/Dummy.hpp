#pragma once

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget{
	public :
		Dummy();
		Dummy(const Dummy& obj);
		Dummy& operator=(const Dummy& obj);
		~Dummy();
		ATarget* clone() const;
};