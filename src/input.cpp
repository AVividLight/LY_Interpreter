#include "input.h"

int InputManager::GetInput ()
{
	
	std::cout << "Enter a command: ";
	
	getline (std::cin, user_input);
	trim (user_input);
	lowercase (user_input);
	
	std::cout << "You entered '" + user_input+ "'." << std::endl;
	
	return 0;
}