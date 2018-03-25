#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <string>

#include "stringmod.h"

class InputManager
{
public:
	int GetInput ();

private:
	std::string user_input;
};

#endif /* end of include guard: INPUT_H */
