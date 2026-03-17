/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:21:24 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/12 12:22:00 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap( void );
	~FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap& aFragTrap);
	FragTrap &operator=(const FragTrap& aFragTrap);
	void	attack(const std::string& target);
	void	highFivesGuys( void );
};
