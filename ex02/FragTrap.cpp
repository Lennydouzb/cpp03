/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:22:17 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/12 13:06:25 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap( void ) 
{
	this->_hitPoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	std::cout << "A FragTrap named " << this->_name << " has been created."
		<< std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
	std::cout << "A FragTrap named " 
		<< this->_name << " has been created with a cool name."<< std::endl;
}
FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->_name << " has been destructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& aFragTrap)
{
	this->_name = aFragTrap._name;
	this->_hitPoints = aFragTrap._hitPoints;
	this->_energy = aFragTrap._energy;
	this->_attackDamage = aFragTrap._energy;
	std::cout << "a FragTrap named " << this->_name << " has been created, it's a clone" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& aFragTrap)
{
	std::cout << "FragTrap " << this->_name << " stole " << aFragTrap._name << " attributes";
	this->_name = aFragTrap._name;
	this->_hitPoints = aFragTrap._hitPoints;
	this->_energy = aFragTrap._energy;
	this->_attackDamage = aFragTrap._energy;
	std::cout << " it is now " << this->_name <<  std::endl;
	return (*this);

}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_hitPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "FragTrap " << this->_name << " can't do anything" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	if (this->_energy > 0 && this->_hitPoints > 0)
	{
		std::cout << this->_name << " high fives guys." << std::endl;
			this->_energy -= 1;
	}else
		std::cout << "FragTrap " << this->_name << " can't do anything" << std::endl;
}
