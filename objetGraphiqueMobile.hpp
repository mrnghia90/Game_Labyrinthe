#ifndef _OBJETGRAPHIQUEMOBILE_HPP_
#define _OBJETGRAPHIQUEMOBILE_HPP_

#include "objetGraphique.hpp"

class ObjetGraphiqueMobile : public ObjetGraphique{
	public :
		ObjetGraphiqueMobile(int i= 0, int j = 0, int type = 0) ;
		void deplacerDroite() ;
		void deplacerGauche() ;
		void deplacerBas() ;
		void deplacerHaut() ;
};

#endif
