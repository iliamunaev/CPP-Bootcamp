#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {

    private:
        int             index;
        std::string     firstName;
        std::string     lastName;
        std::string     nickName;
        std::string     phoneNumber;
        std::string     darkSecret;

    public:
        Contact(
            int index,
            const std::string& firstName,
            const std::string& lastName,
            const std::string& nickName,
            const std::string& phoneNumber,
            const std::string& darkSecret
        );

        int getIndex() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhoneNumber() const;
        std::string getDarkSecret() const;
};

#endif /* CONTACT_HPP */
