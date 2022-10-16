/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:09:17 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/16 19:19:24 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	pr(std::string str)
{
	std::cout << str << std::endl;
}

std::string	do_replace(std::string line, std::string s1, std::string s2)
{
	std::string new_s = "";
	char	buffer[1000];
	size_t	length;
	size_t i = 0;
	size_t j = 0;
	

	while (i != std::string::npos)
	{
		j = i;
		i = line.find(s1, i);

		if (i == std::string::npos)
		{
			length = line.copy(buffer, line.length() - j, j);
			buffer[length] = '\0';
			new_s += buffer;
		}
		else
		{
			if (i != j)
			{
				length = line.copy(buffer, i - j, j);
				buffer[length] = '\0';
				new_s += buffer;
			}
			i += s1.length();
			new_s += s2;
		}
		if (i == line.length())
			break;
	}
	return (new_s);
}

std::string get_file_name(char *str)
{
	std::string new_name;

	new_name = (std::string)str;
	new_name += ".replace";
	return (new_name);
}

int	main(int argc, char **argv)
{
	std::string line;
	if (argc != 4)
	{
		std::cout << "Wrong number of parameters" << std::endl;
		return (1);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::fstream file_from(argv[1], std::ios::in);
	if (file_from.is_open())
	{
		std::fstream file_out(get_file_name(argv[1]), std::ios::out);
		if (file_out.is_open())
		{
			while (getline(file_from, line))
			{
				line = do_replace(line, s1, s2);
				file_out << line << '\n';
			}	
			file_out.close();
		}
		else
			std::cout << "Unable to open file *.replace" << std::endl;
		file_from.close();
	}
	else std::cout << "Unable to open file " << argv[1] << std::endl;
	return (0);
}