/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:17 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/04 15:50:18 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>


class Contact {

    private:
        unsigned short _index;
        std::string _userData[5];

    public:
        Contact();

        void setData(const std::string& data, int index);

        std::string getData(int index) const;

        void setIndex(unsigned short index);
        unsigned short getIndex() const;
};

#endif /* CONTACT_HPP */
