/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:17:01 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/12 12:30:34 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <climits>

int main( void )
{
    std::cout << "--- 1. CONSTRUCTORS ---" << std::endl;
    ClapTrap Clap("Clappy");
    ScavTrap Scav("Scavvy"); 
    FragTrap Frag("Fraggy"); 
    std::cout << "\n--- 2. BASIC FRAGTRAP ACTIONS ---" << std::endl;
    Frag.attack("steve from mc"); 
    Frag.takeDamage(30);
    Frag.beRepaired(15);


    std::cout << "\n--- 3. GUARD GATE AND DEAD USE ---" << std::endl;
    Scav.guardGate();
    ScavTrap aScav = ScavTrap(Scav);
    aScav.takeDamage(100); 
    aScav.guardGate(); 
    aScav.attack("someone");


	std::cout << "\n--- 4. HIGH FIVE AND DEAD USE ---" << std::endl;
	FragTrap aFrag = FragTrap(Frag);
    aFrag.takeDamage(100); 
    aFrag.highFivesGuys(); 
    aFrag.attack("someone");

    std::cout << "\n--- 5. CLAPTRAP ACTIONS (Reminder) ---" << std::endl;
    Clap.attack("a Skag");
    Clap.takeDamage(5);

    std::cout << "\n--- 6. DESTRUCTORS ---" << std::endl;
	return 0;
}
