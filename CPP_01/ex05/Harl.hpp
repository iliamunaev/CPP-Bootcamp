#ifndef HARL_05_HPP
#define HARL_05_HPP

#include <iostream>
#define COMMENTS_COUNT 4

class Harl {
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void (Harl::*_comments[COMMENTS_COUNT])(void);

	public:
		Harl();
		~Harl();
		Harl(const Harl& other) = delete;
		Harl& operator=(const Harl& other) = delete;

		void complain(const std::string& level);

};

#endif // HARL_05_HPP
