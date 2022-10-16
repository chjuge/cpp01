/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:14:57 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/16 12:50:51 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Constructor of [Weapon] <" << this->type << ">" << std::endl;
}
Weapon::Weapon()
{
	std::cout << "Constructor of [Weapon] <" << "no type" << ">" << std::endl;
}
Weapon::~Weapon()
{
	std::cout << "Destructor of [Weapon] <" << this->type << ">" << std::endl;
}

const std::string& Weapon::getType()
{
	return (this->type);
}
void Weapon::setType(const std::string &type) {
	if (type.compare("") == 0)
	{
		std::cout << "wrong type" << std::endl;
		return ;
	}
	this->type = type;
}