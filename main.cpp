#include "mur.hpp"
#include "sortie.hpp"
#include "couloir.hpp"
#include "objetGraphique.hpp"
#include "personnage.hpp"
#include "objetGraphiqueFixe.hpp"
#include "labyrinthe.hpp"
#include "plateau.hpp"

int main(void){
	Mur m ;
	Couloir c;
	Sortie s ;
	Personnage p ;
	//Labyrinthe l ;
	ObjetGraphique(1, 2, 3) ;
	Plateau pl(5, 5);
	ObjetGraphiqueFixe ** x[5] ;
	
	x = new ObjetGraphiqueFixe
	
	//l.afficher() ;
	pl.afficher() ;
	m.afficher() ;
	c.afficher() ;
	s.afficher() ;
	p.afficher() ;
	return 0 ;
}
