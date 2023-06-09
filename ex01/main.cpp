/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 04:04:02 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/19 08:37:07 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap    scav("Bot");
    ClapTrap    clap("Mario");
    
    ScavTrap    scav2(scav);
    ClapTrap    clap2(clap);

    scav.attack("Mario");
    clap.takeDamage(20);
    clap.beRepaired(10);
    scav.guardGate();

    for (int i = 0; i < 11; i++)
        clap.beRepaired(20);

    for (int i = 0; i < 51; i++)
        scav.beRepaired(20);
    return (0);
}
