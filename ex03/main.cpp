/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 04:21:03 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/19 09:17:19 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap    diamond("Bot");
    DiamondTrap    diamond2(diamond);
    DiamondTrap    diamond3("Mario");
    
    diamond.attack("Mario");
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    diamond.highFivesGuys();
    diamond.guardGate();
    diamond.whoAmI();

    for (int i = 0; i < 50; i++)
        diamond.beRepaired(20);
    return (0);
}