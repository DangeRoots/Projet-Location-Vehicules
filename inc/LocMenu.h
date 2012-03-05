#ifndef LOCMENU_H
#define LOCMENU_H

#include <iostream>
#include <vector>
#include <cstdlib>

/*!
 * \file LocMenu.h
 * \brief Classe LocMenu
 * 
 *  Cette classe permet de gérer le menu du logiciel de location
 * 
 * \author Gilles Coulais, Icham Sirat
 * \version 0.1
 */

class LocMenu {

	private:
			vector<string> entrees;		
			vector<string>::iterator menuI;

	public:
			
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe LocMenu
		*
		*  \param aucun
		*/
		LocMenu();

		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe LocMenu
		* 
		*  \param aucun
		*/				
		~LocMenu(); 

		/*!
		*  \brief Afficher la liste du menu
		*
		*  Affiche la liste du menu. Le numéro qui précède l'intitulé du choix est le numéro du choix.
		*
		*  \param aucun
		*  \return void
		*/				
		void afficher();

		string recupererValeur(string texte);

		void traiter(int choix);

};

#endif

	//~ int main() {
		//~ int choix(-1);
		//~ 
		//~ while (choix != 0) {
			//~ afficherMenu();
			//~ choix = recupererValeur("Quel est votre choix : ");
			//~ traiter(choix);
		//~ }
		//~ 
		//~ return 0;
	//~ }
	//~ */
//~ };
//~ 
//~ #endif
