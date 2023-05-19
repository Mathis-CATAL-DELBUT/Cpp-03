/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 02:18:02 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/19 08:40:28 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string cyan("\033[1;36m");
const std::string reset("\033[0m");

ClapTrap::ClapTrap(std::string name)
{
    std::cout
    << green
    << "ClapTrap constructor called"
    << reset
    << std::endl;
    
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;

	std::cout 
    << cyan
    << "ClapTrap Copy Constructor" 
    << _name 
    << " has been called"
    << reset
    << std::endl;

}

ClapTrap::ClapTrap( std::string name, int HitPoints, int EnergyPoints, int AttackDamage ) : \
	_name( name ), _hitPoints( HitPoints ), _energyPoints( EnergyPoints ), _attackDamage( AttackDamage )
{

	std::cout
    << cyan
	<< "ClapTrapper: Constructor with Random params" 
	<< reset
    << std::endl;

}

ClapTrap::~ClapTrap()
{
    std::cout
    << red
    << "ClapTrap destructor called" 
    << reset
    << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

void ClapTrap::attack(std::string const & target)
{
    if (this->_energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << "ClapTrap " << this->_name << " can't attack, " << red << "he has no energy left " << reset << std::endl;
    }

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
        this->_energyPoints--;   
    }
    else
        std::cout << "ClapTrap " << this->_name << " can't be repaired, " << red << "he has no energy left " << reset << std::endl;
}
