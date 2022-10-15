/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:51:24 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/15 18:04:22 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMVIE_H
#include <iostream>

class Zombie
{
	std::string name;

	public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif