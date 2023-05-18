/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 03:57:20 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/18 18:18:46 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string cyan("\033[1;36m");
const std::string reset("\033[0m");

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout
    << green
    << "ScavTrap constructor called"
    << reset
    << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    *this = copy;

    std::cout 
    << cyan
    << "ScavTrap Copy Constructor" 
    << _name 
    << " has been called"
    << reset
    << std::endl;

}

ScavTrap::~ScavTrap()
{
    std::cout
    << red
    << "ScavTrap destructor called" 
    << reset
    << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

void    ScavTrap::attack(std::string const & target)
{
    std::cout
    << "ScavTrap "
    << _name
    << " attack "
    << target
    << ", causing "
    << _attackDamage
    << " points of damage!"
    << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout
    << "ScavTrap "
    << _name
    << " have enterred in Gate keeper mode"
    << std::endl;
}