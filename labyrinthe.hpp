#ifndef _LABYRINTHE_HPP_
#define _LABYRINTHE_HPP_

#include "plateau.hpp"
#include "personnage.hpp"
class Labyrinthe {
	protected :
		int m_nbl ;
		int m_nbc ;
		Plateau* m_plateau ;
		Personnage* m_personnage ;
	public :
		void afficher() ;
		Labyrinthe() ;
		void deplacerPersoDroite() ;
		void deplacerPersoGauche() ;
		void deplacerPersoBas() ;
		void deplacerPersoHaut() ;
		bool fini() ;
};

#endif 
