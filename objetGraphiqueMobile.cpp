#include "objetGraphiqueMobile.hpp"

ObjetGraphiqueMobile::ObjetGraphiqueMobile(int i, int j, int type) : ObjetGraphique(i, j, type){
	
}

void ObjetGraphiqueMobile::deplacerHaut(){
	m_i-- ;
}

void ObjetGraphiqueMobile::deplacerBas(){
	m_i++ ;
}

void ObjetGraphiqueMobile::deplacerGauche(){
	m_j-- ;
}

void ObjetGraphiqueMobile::deplacerDroite(){
	m_j++ ;
}
