#ifndef _PLATEAU_HPP_
#define _PLATEAU_HPP_
#include "objetGraphiqueFixe.hpp"
#include "objetGraphiqueMobile.hpp"

class Plateau {
	protected :
		int m_nbl;
		int m_nbc ;
		ObjetGraphiqueFixe*** m_plateau ;
	public :
		Plateau(int nbl, int nbc) ;
		void setCase(int i, int j, ObjetGraphiqueFixe* o) ;
		ObjetGraphiqueFixe* getCase(int i, int j) ;
		int afficher() ;
		void afficher(ObjetGraphiqueMobile&) ;
		int getLignes() ;
		int getColonnes() ;
};

#endif
