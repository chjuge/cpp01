/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:33:16 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/16 20:26:15 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	harl.complain(INFO);
	harl.complain(DEBUG);
	harl.complain(WARNING);
	harl.complain(ERROR);
	harl.complain("Pomoika");
	return (0);
}