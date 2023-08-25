#ifndef _OBJETGRAPHIQUE_HPP_
#define _OBJETGRAPHIQUE_HPP_

class ObjetGraphique {
	protected : 
		int m_i ;
		int m_j ;
		int m_type ;
	public :
		int getType() ;
		int getI() ;
		int getJ() ;
		void setI(int i) ;
		void setJ(int J) ;
		void setType(int type) ;
		virtual void afficher() ;
		ObjetGraphique(int i = 0, int j = 0, int type = 0) ;
};

#endif
