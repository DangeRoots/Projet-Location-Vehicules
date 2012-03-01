using namespace std;

#include <LocMenu.h>
<<<<<<< HEAD

/*! Dans le main
 * Avant la boucle : LocMenu monMenu;
 * dans la boucle : 
 * 		monMenu.afficher();
 * 		monMenu.traiter();
 * 		monMenu.quitter(); // À voir
 */

LocMenu::LocMenu() {
	entrees.push_back("[1] Ajouter un véhicule");
	entrees.push_back("[2] Créer une nouvelle réservation");
	entrees.push_back("[3] Afficher la liste des véhicules");
	entrees.push_back("[4] Afficher les réservations");
	entrees.push_back("[5] Quitter");
}

LocMenu::~LocMenu() {
}

void LocMenu::afficher() {
	menuI= entrees.begin();
	while (menuI != entrees.end()){
    cout << *menuI << endl;
    menuI ++;}

	
}

int LocMenu::recupererValeur(string texte) {
return 42;
}

void LocMenu::traiter(int choix) {
}
/*
LocMenu::LocMenu() {
	//~ entrees[0] = "Ajouter un véhicule";
	//~ entrees[1] = "Créer une nouvelle réservation";
	//~ entrees[2] = "Afficher la liste des véhicules";
	//~ entrees[3] = "Afficher les réservations";
	//~ entrees[4] = "Quitter";
}
		
LocMenu::~LocMenu(){
}

void LocMenu::afficher() {
// Affiche le menu général de l'application
// TODO
	for (menuI = entrees.begin(); menuI != entrees.end(); menuI ++){
		cout << *menuI << endl; 
}

int LocMenu::recupererValeur(string texte) {
// Permet de récupérer une valeur entière entrée par l'utilisateur
// TODO
	//~ int valeur;
	//~ cout << texte;
	//~ cin >> valeur;
	//~ return valeur;
	return 12;
}

void LocMenu::traiter(int choix) {
 // TODO
 

	//~ if (choix == 1) {
		//~ l = recupererValeur("Longueur : ");
		//~ h = recupererValeur("Hauteur : ");
		//~ rectangle(l, h);
	//~ }
	//~ if (choix == 2) {
		//~ l = recupererValeur("Côté : ");
		//~ carre(l);
	//~ }
	//~ if (choix == 3) {
		//~ h = recupererValeur("Hauteur : ");
		//~ rectIso(h);
	//~ }
	//~ if (choix == 4) {
		//~ h = recupererValeur("Hauteur : ");
		//~ triIso(h);
	//~ }
	//~ if (choix == 5) {
		 h = recupererValeur("Hauteur : ");
		 losange(h);
	 }
}


int main() {
	int choix(-1);
	
	while (choix != 0) {
		afficherMenu();
		choix = recupererValeur("Quel est votre choix : ");
		traiter(choix);
	}
	
	return 0;
=======

LocMenu::LocMenu() {
}
		
LocMenu::~LocMenu() {
}

void LocMenu::afficher() {
}

int LocMenu::recupererValeur(string texte) {
	return 42;
}

void LocMenu::traiter(int choix) {
>>>>>>> f61d26916c025588f072926c09374e5e62c83228
}
