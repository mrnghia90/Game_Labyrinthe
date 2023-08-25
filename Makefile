# Paramètrage du compilateur et des options de compilation des modules
COMP = g++
OPTIONS = -c

# Paramètrage de l'exécutable et de la liste des objets qui le compose
EXECUTABLE = exec
OBJETS = mur.o sortie.o couloir.o main.o objetGraphique.o objetGraphiqueFixe.o objetGraphiqueMobile.o personnage.o plateau.o labyrinthe.o

# Description des cibles
${EXECUTABLE}:${OBJETS}
	${COMP} -o ${EXECUTABLE} ${OBJETS}

main.o: main.cpp objetGraphique.cpp objetGraphique.hpp 
	${COMP} ${OPTIONS} main.cpp

mur.o: mur.cpp mur.hpp objetGraphique.cpp objetGraphique.hpp 
	${COMP} ${OPTIONS} mur.cpp

sortie.o: sortie.cpp sortie.hpp objetGraphique.cpp objetGraphique.hpp  
	${COMP} ${OPTIONS} sortie.cpp

couloir.o: couloir.cpp couloir.hpp objetGraphique.cpp objetGraphique.hpp  
	${COMP} ${OPTIONS} couloir.cpp

objetGraphique.o : objetGraphique.cpp objetGraphique.hpp
	${COMP} ${OPTIONS} objetGraphique.cpp

objetGraphiqueFixe.o : objetGraphiqueFixe.cpp objetGraphiqueFixe.hpp
	${COMP} ${OPTIONS} objetGraphiqueFixe.cpp

objetGraphiqueMobile.o : objetGraphiqueMobile.cpp objetGraphiqueMobile.hpp objetGraphique.cpp objetGraphique.hpp
	${COMP} ${OPTIONS} objetGraphiqueMobile.cpp

personnage.o : personnage.cpp personnage.hpp
	${COMP} ${OPTIONS} personnage.cpp

labyrinthe.o : labyrinthe.cpp labyrinthe.hpp
	${COMP} ${OPTIONS} labyrinthe.cpp

plateau.o : plateau.cpp plateau.hpp
	${COMP} ${OPTIONS} plateau.cpp