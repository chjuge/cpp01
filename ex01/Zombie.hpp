/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:51:24 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/15 18:34:48 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMVIE_H
#include <iostream>

class Zombie
{
	std::string name;

	public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void set_name(std::string);
};


Zombie* zombieHorde(int N, std::string name);
#endif