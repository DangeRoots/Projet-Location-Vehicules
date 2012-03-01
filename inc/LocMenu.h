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
	
	~LocMenu(); 
	
<<<<<<< HEAD
	void afficher();

	int recupererValeur(string texte);

	void traiter(int choix);
=======
		LocMenu();
		~LocMenu();		void afficher();

		int recupererValeur(string texte);

		void traiter(int choix);

>>>>>>> f61d26916c025588f072926c09374e5e62c83228
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
