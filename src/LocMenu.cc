#include <LocMenu.h>

using namespace std;

/*! Dans le main
 * Avant la boucle : LocMenu monMenu;
 * dans la boucle : 
 * 		monMenu.afficher();
 * 		monMenu.traiter();
 * 		monMenu.quitter(); // À voir
 */

LocMenu::LocMenu() {
	entrees[0] = "Ajouter un véhicule";
	}
		
LocMenu::~LocMenu();

void LocMenu::afficher() {
// Affiche le menu général de l'application
// TODO
// for (menuI = entrees.begin(); mneuI != entrees.end(); menuI++)
// 		cout << *menuI << endl;
	cout << "Choisissez une option : " << endl;
	cout << "1. Rectangle " << endl;
	cout << "2. Carré" << endl;
	cout << "3. Triangle rectangle isocèle" << endl;
	cout << "4. Triangle isocèle" << endl;
	cout << "5. Losange" << endl << endl;
	cout << "0. Quitter" << endl << endl;
	return;
}

int LocMenu::recupererValeur(string texte) {
// Permet de récupérer une valeur entière entrée par l'utilisateur
// TODO
	int valeur;
	cout << texte;
	cin >> valeur;
	return valeur;
}

void LocMenu::traiter(int choix) {
/* Dessine l'objet choisi par l'utilisateur 
 * en appelant les fonctions correspondant
 * aux entrées de menu */
 // TODO
 
	int l, h;
	
	if (choix == 1) {
		l = recupererValeur("Longueur : ");
		h = recupererValeur("Hauteur : ");
		rectangle(l, h);
	}
	if (choix == 2) {
		l = recupererValeur("Côté : ");
		carre(l);
	}
	if (choix == 3) {
		h = recupererValeur("Hauteur : ");
		rectIso(h);
	}
	if (choix == 4) {
		h = recupererValeur("Hauteur : ");
		triIso(h);
	}
	if (choix == 5) {
		h = recupererValeur("Hauteur : ");
		losange(h);
	}

	return;
}

/*
int main() {
	int choix(-1);
	
	while (choix != 0) {
		afficherMenu();
		choix = recupererValeur("Quel est votre choix : ");
		traiter(choix);
	}
	
	return 0;
}
*/
