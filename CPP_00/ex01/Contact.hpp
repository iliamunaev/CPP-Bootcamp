#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {

    private:
        unsigned short _index;
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _darkSecret;

    public:
        Contact();
        void setIndex(unsigned short index);
        void setFirstName(const std::string& firstName);
        void setLastName(const std::string& lastName);
        void setNickname(const std::string& nickname);
        void setDarkSecret(const std::string& darkSecret);

        unsigned short getIndex() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
};

#endif /* CONTACT_HPP */
