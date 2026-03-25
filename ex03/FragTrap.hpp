/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:21:24 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/25 17:15:53 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap( void );
	~FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap& aFragTrap);
	FragTrap &operator=(const FragTrap& aFragTrap);
	void	highFivesGuys( void );
};
