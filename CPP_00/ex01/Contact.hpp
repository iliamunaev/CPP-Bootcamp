#ifndef CONTACT_H
#define CONTACT_H

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
            int                 index,
            const std::string&  firstName,
            const std::string&  lastName,
            const std::string&  nickName,
            const std::string&  phoneNumber,
            const std::string&  darkSecret
        );
        void    displayIndex() const;
        void    displayFirstName() const;
        void    displayLastName() const;
        void    displayNickname() const;

        // int     getIndex() const;        
};

#endif /* CONTACT_H */