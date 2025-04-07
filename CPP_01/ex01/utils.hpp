/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:34:32 by Ilia Munaev       #+#    #+#             */
/*   Updated: 2025/04/07 21:09:45 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file utils.hpp
 * @brief Utility functions for the Zombie project.
 *
 * This header file contains declarations of utility functions used in the Zombie project.
 * In particular, it provides a function for properly deleting dynamically allocated
 * arrays of Zombies to prevent memory leaks.
 */
#ifndef UTILS_HPP
#define UTILS_HPP

#include "Zombie.hpp"
#include <memory>

void deleteZombie(Zombie* zombieHorde);

#endif /* UTILS_HPP */
