#include "Harl.hpp"

int main (int argc, char **argv) {

	(void)argc;

	Harl h = Harl();

	std::string level = argv[1];
	h.complain(level);
	
	return 0;
}
