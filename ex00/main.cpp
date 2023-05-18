/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 02:20:45 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/18 03:10:40 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap	player1("Mario");
	ClapTrap	player2("Luigi");
    ClapTrap    player3(player1);

    for(int i = 0; i < 11; i++)
    {
        player1.attack("Luigi");
        player2.takeDamage(5);
        player2.beRepaired(5);
    }
    return (0);
}