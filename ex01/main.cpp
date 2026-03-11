/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:17:01 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/11 19:02:17 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <climits>

int main( void )
{
    std::cout << "--- 1. CONSTRUCTORS ---" << std::endl;
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavvy"); 
    std::cout << "\n--- 2. BASIC SCAVTRAP ACTIONS ---" << std::endl;
    scav.attack("steve from mc"); 
    scav.takeDamage(30);
    scav.beRepaired(15);


    std::cout << "\n--- 3. GUARD GATE AND DEAD USE ---" << std::endl;
    scav.guardGate();
    ScavTrap tired("TiredBot");
    tired.takeDamage(100); 
    tired.guardGate(); 
    tired.attack("someone");

    std::cout << "\n--- 5. CLAPTRAP ACTIONS (Reminder) ---" << std::endl;
    clap.attack("a Skag");
    clap.takeDamage(5);

    std::cout << "\n--- 6. DESTRUCTORS ---" << std::endl;
	return 0;
}
