/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:53:55 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/15 18:29:37 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor [" << this->name << "] called" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor [" << this->name << "] called" << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ":	";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
