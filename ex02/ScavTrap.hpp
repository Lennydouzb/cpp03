/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:45:57 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/11 19:05:34 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap( void );
	~ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap& aScavTrap);
	ScavTrap &operator=(const ScavTrap& aScavTrap);
	void	attack(const std::string& target);
	void	guardGate( void );
};
