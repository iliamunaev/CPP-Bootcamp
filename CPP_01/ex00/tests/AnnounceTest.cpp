#include <iostream>

class Zombie {
	private:
		std::string _name = "ZZZZ";

	public:
		void announce(void);

};

void Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
int main() {

	Zombie z;

	z.announce();

	return 0;
}
