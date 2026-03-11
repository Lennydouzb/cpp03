/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:02:34 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/11 17:55:49 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>
#include <climits>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energy;
	unsigned int	_attackDamage;
public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap& aClapTrap);
	ClapTrap &operator=(const ClapTrap& aClapTrap);
	~ClapTrap( void );
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
