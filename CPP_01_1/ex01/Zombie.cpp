/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:45:34 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 21:08:28 by Ilia Munaev      ###   ########.fr       */
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
 * @brief Default constructor for the Zombie class.
 *
 * This constructor initializes the Zombie object with a default name of "NoName".
 * It is useful when creating an array of Zombies where names will be assigned later
 * using the `setName()` function.
 */
Zombie::Zombie() : _name("NoName") {}

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

/**
 * @brief Sets the name of the Zombie object.
 *
 * This function assigns a new name to the Zombie object. It can be used to
 * modify the name after the object has been created. This is especially useful
 * when creating a horde of Zombies with generic names.
 *
 * @param name A string representing the new name for the Zombie.
 */
void Zombie::setName(std::string name) {
	_name = name;
}
