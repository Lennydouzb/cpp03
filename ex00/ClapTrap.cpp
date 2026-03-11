/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:11:36 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/11 19:00:00 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
/*
* Constructors / destrcutor
*/
ClapTrap::ClapTrap( void )
{
	this->_name = "Clanker";
	this->_hitPoints = 10;
	this->_energy = 10;
	this->_attackDamage = 0;
	std::cout << this->_name << " has been created" << std::endl;
}

ClapTrap::ClapTrap( std::string name )
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energy = 10;
	this->_attackDamage = 0;
	std::cout << this->_name << " has been created with a cool name" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& aClapTrap)
{
	this->_name = aClapTrap._name;
	this->_hitPoints = aClapTrap._hitPoints;
	this->_energy = aClapTrap._energy;
	this->_attackDamage = aClapTrap._energy;
	std::cout << this->_name << " has been created, it's a clone" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << this->_name << " was destroyed" << std::endl;
}
/*
* Overloads
*/

ClapTrap& ClapTrap::operator=(const ClapTrap& aClapTrap)
{
	std::cout << this->_name << " stole " << aClapTrap._name << " attributes";
	this->_name = aClapTrap._name;
	this->_hitPoints = aClapTrap._hitPoints;
	this->_energy = aClapTrap._energy;
	this->_attackDamage = aClapTrap._energy;
	std::cout << " it is now " << this->_name <<  std::endl;
	return (*this);
}

/*
* Methods
*/

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't do anything" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes ";
	std::cout << amount;
	std::cout << " points of damage! it now has ";
	if (amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << this->_hitPoints << " hit points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " is getting repaired, it gets ";
		std::cout << amount;
		std::cout << " hit points!";

		unsigned long int healed= static_cast<unsigned long int>(amount) 
			+ static_cast<unsigned long int>(this->_hitPoints);
		if (healed > UINT_MAX)
		{
			std::cout << " it has max hit points ";
			this->_hitPoints = UINT_MAX;
		}
		else	
			this->_hitPoints = healed;
		std ::cout << "it now has " << this->_hitPoints << " hit points." << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't do anything" << std::endl;
}
