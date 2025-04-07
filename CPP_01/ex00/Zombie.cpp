/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:45:34 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 17:11:30 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file Zombie.cpp
 * @brief Implementation of the Zombie class methods.
 *
 * This file contains the implementation of the Zombie class constructor, destructor,
 * and the announce method, which prints the zombie's announcement to the console.
 */
#include "Zombie.hpp"

/**
 * @brief Constructs a new Zombie object with a given name.
 *
 * @param name The name of the zombie.
 */
Zombie::Zombie(std::string name) : _name(name) {}

/**
 * @brief Destroys the Zombie object.
 *
 * This destructor announces that the zombie is being destroyed, printing a message
 * containing the zombie's name for debugging and tracking purposes.
 */
Zombie::~Zombie(){
	std::cout << _name << ": is destroyed." << std::endl;
}

/**
 * @brief Announces the presence of the Zombie.
 *
 * This function prints a message indicating that the zombie is making its
 * characteristic sound: "BraiiiiiiinnnzzzZ...".
 */
void Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
