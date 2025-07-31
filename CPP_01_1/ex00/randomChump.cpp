/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:45:50 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 17:11:22 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file randomChump.cpp
 * @brief Implementation of the randomChump function.
 *
 * This file contains the definition of the randomChump function which creates a Zombie
 * object on the stack, announces its presence, and then destroys it automatically
 * when it goes out of scope.
 */
#include "Zombie.hpp"

/**
 * @brief Creates a Zombie object on the stack and announces it.
 *
 * This function creates a `Zombie` object using stack allocation,
 * calls the `announce()` method to print the zombie's message,
 * and then destroys the zombie automatically when it goes out of scope.
 *
 * @param name The name of the Zombie to be created.
 */
void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}
