/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 04:14:11 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/18 04:14:23 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap    frag("Bot");
    ClapTrap    clap("Mario");
    
    FragTrap    frag2(frag);
    ClapTrap    clap2(clap);

    frag.attack("Mario");
    clap.takeDamage(20);
    clap.beRepaired(10);
    frag.highFivesGuys();

    for (int i = 0; i < 11; i++)
        clap.beRepaired(20);
    return (0);
}