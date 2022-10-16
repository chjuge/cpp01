/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:11:16 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/16 12:50:23 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
class Weapon {
	std::string type;

public:
	Weapon(std::string type);
	Weapon();
	~Weapon();
	const std::string& getType();
	void setType(const std::string &type);
};

#endif