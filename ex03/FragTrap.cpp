/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 04:13:04 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/19 09:14:44 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string cyan("\033[1;36m");
const std::string reset("\033[0m");

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout
    << green
    << "FragTrap constructor called"
    << reset
    << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    *this = copy;

    std::cout 
    << cyan
    << "FragTrap Copy Constructor has been called"
    << reset
    << std::endl;

}

FragTrap::~FragTrap()
{
    std::cout
    << red
    << "FragTrap destructor called" 
    << reset
    << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout
    << "FragTrap "
    << _name
    << " is asking for high fives"
    << std::endl;
}