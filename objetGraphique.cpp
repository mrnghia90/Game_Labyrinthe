#include "objetGraphique.hpp"
/*
 *  0 mur
 * 	1 couloir
 *  2 sortie
 *  3 personnage
 */
int ObjetGraphique::getI(){
	return m_i ;
}

int ObjetGraphique::getJ(){
	return m_j ;
}

int ObjetGraphique::getType(){
	return m_type ;
}

ObjetGraphique::ObjetGraphique(int i, int j, int type){
	m_type = type ;
	m_i = i ;
	m_j = j ;
}

void ObjetGraphique::afficher(){
}

void ObjetGraphique::setI(int i){
	m_i = i ;
}

void ObjetGraphique::setJ(int j){
	m_j = j ;
}


void ObjetGraphique::setType(int type){
	m_type = type ;
}
