/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:17:01 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/11 17:28:03 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap = ClapTrap();
    ClapTrap trap("FR4G-TP");
    ClapTrap clone(clap); 



	std::cout << "\n--- ACTIONS" << std::endl;
    clap.attack("a Skag");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n--- DEATH TEST" << std::endl;
    clone.takeDamage(20);
	//should not attack
    clone.attack("target");
	//should not repair
    clone.beRepaired(10); 
    std::cout << "\n--- OVERFLOW" << std::endl;
    ClapTrap tank("Tanky");
    tank.beRepaired(UINT_MAX);

    std::cout << "\n--- DESTRUCTORS ---" << std::endl;
    return 0;
}
