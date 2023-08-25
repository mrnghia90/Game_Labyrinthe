#include "labyrinthe.hpp"
#include "plateau.hpp"
#include <iostream>

void Labyrinthe::afficher(){
	std::cout<< (*m_plateau).getLignes() << (*m_plateau).getColonnes() ;
	for (int i = 0 ; i<m_nbl ; i++){
		for (int j = 0 ; j<m_nbc ; j++){
			std::cout<< (*m_plateau).getCase(i, j) ;
		}
	}
}

Labyrinthe::Labyrinthe(){
	Plateau* m_plateau ;
	m_plateau = new Plateau(5,5) ;
	
	
}

