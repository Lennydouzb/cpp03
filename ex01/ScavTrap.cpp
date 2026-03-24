/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:54:06 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/24 13:48:04 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( void ) 
{
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
	std::cout << "A ScavTrap named " << this->_name << " has been created."
		<< std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attackDamage = 20;std::cout << "A ScavTrap named " 
		<< this->_name << " has been created with a cool name."<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& aScavTrap)
{
	this->_name = aScavTrap._name;
	this->_hitPoints = aScavTrap._hitPoints;
	this->_energy = aScavTrap._energy;
	this->_attackDamage = aScavTrap._attackDamage;
	std::cout << "a ScavTrap named " << this->_name << " has been created, it's a clone" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& aScavTrap)
{
	std::cout << "ScavTrap " << this->_name << " stole " << aScavTrap._name << " attributes";
	this->_name = aScavTrap._name;
	this->_hitPoints = aScavTrap._hitPoints;
	this->_energy = aScavTrap._energy;
	this->_attackDamage = aScavTrap._attackDamage;
	std::cout << " it is now " << this->_name <<  std::endl;
	return (*this);

}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->_name << " has been destructed" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can't do anything" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	if (this->_energy > 0 && this->_hitPoints > 0)
	{
		std::cout << this->_name << " is now in gate keeper mode" << std::endl;
			this->_energy -= 1;
	}else
		std::cout << "ScavTrap " << this->_name << " can't do anything" << std::endl;
}
