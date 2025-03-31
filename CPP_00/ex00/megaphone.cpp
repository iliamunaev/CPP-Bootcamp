// megaphone.cpp

#include <iostream>
#include <cctype>


void print_word (char *word) {

	for (int j = 0; word[j]; j++)
	{
		std::cout << (char)std::toupper(word[j]);
	}
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
		print_word(argv[i]);
        if (i < argc - 1)
            std::cout << " ";
    }
    std::cout << std::endl;

    return 0;
}
