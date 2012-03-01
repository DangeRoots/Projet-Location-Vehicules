#ifndef LOCMENU_H
#define LOCMENU_H

#include <iostream>
#include <vector>

class LocMenu {

	private:
		vector<string> entrees;		
		vector<string>::iterator menuI;

	public:
	
		LocMenu();
		~LocMenu();		void afficher();

		int recupererValeur(string texte);

		void traiter(int choix);

};

#endif
