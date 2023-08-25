#include "plateau.hpp"
#include <iostream>

Plateau::Plateau(int nbl, int nbc){
	m_nbl = nbl;
	m_nbc = nbc;
	m_plateau = new ObjetGraphiqueFixe**[m_nbl]  ;

	for (int i=0; i<m_nbl ; i++){
		m_plateau[i] = new ObjetGraphiqueFixe * [m_nbc] ;
	}
	for ( int i = 0 ; i <m_nbl ; i++ ){
		for (int j = 0 ; j < m_nbc ; j++){
			m_plateau[i][j] = NULL ;
		} 
	}
	/*for (int i = 0 ; i<5 ; i++){
		for(int j = 0 ; j<5 ; j++){
			(*(m_plateau)[i][j]).setI(i) ;
			(*(m_plateau)[i][j]).setJ(j) ;
			(*(m_plateau)[i][j]).setType(1) ;
			if (i==1 or i==3) { 
				(*(m_plateau)[i][j]).setType(0) ;
			}
		}
	}*/
}
/*
Plateau::Plateau(const Plateau& p){
	m_nbl = p.m_nbl ;
	m_nbc = p.m_nbc ;
	m_plateau = new ObjetGraphiqueFixe**[m_nbl] ;
	
	for (int i = 0 ; i<m_nbl
}*/

ObjetGraphiqueFixe* Plateau::getCase(int i, int j){
	return m_plateau[i][j] ;
}

int Plateau::getLignes(){
	return m_nbl ;
}

int Plateau::getColonnes(){
	return m_nbc ;
}

int Plateau::afficher(){
	for (int i = 0 ; i <m_nbl ; i++){
		for (int j = 0 ; j<m_nbc ; j++){
			(*m_plateau)[i][j].afficher() ;
		}
	}
	return 0 ;
}
