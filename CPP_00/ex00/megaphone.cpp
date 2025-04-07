#include <iostream>
#include <cctype>

class Megaphone {
    public:
        void yell(int argc, char **argv) const;
    private:
        void print_uppercase(const char *str) const;
};

void Megaphone::print_uppercase(const char *str) const {
    for (size_t i = 0; str[i]; i++)
        std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
}

void Megaphone::yell(int argc, char **argv) const {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return;

    } for (int i = 1; i < argc; i++) {
        print_uppercase(argv[i]);
        if (i < argc - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) {
    Megaphone megaphone;

    megaphone.yell(argc, argv);
    return 0;
}
