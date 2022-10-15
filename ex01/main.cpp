/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:07:12 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/15 18:35:40 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 3;
	Zombie *horde = zombieHorde(N, "Tushi");

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete [] horde;
	return (0);
}