/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:10:46 by Ilia Munaev       #+#    #+#             */
/*   Updated: 2025/04/07 21:19:19 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#define MAX_NUM_ZOMBIES 100

/**
 * @file Zombie.hpp
 * @brief Defines the Zombie class and related functions for creating and announcing Zombies.
 *
 * This file contains the declaration of the Zombie class, which provides methods for creating,
 * destroying, and announcing Zombie objects.
 */

/**
 * @class Zombie
 * @brief A class representing a Zombie character.
 *
 * The Zombie class allows creating a zombie with a specified name. It provides
 * methods to announce itself and to clean up resources when the zombie is destroyed.
 */
class Zombie {
	private:
		std::string _name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif /* ZOMBIE_HPP */
