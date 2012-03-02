using namespace std;

#include <LocMenu.h>

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
	entrees.push_back("[0] Quitter");
}

LocMenu::~LocMenu() {
}

void LocMenu::afficher() {
	menuI= entrees.begin();
	while (menuI != entrees.end()){
    cout << *menuI << endl;
    menuI ++;}
}

string LocMenu::recupererValeur(string texte) {
	string c;
	cout << texte <<endl;
	cin >>  c;

	return c;
}

void LocMenu::traiter(int choix) {
	switch (choix){
		case 1:{
			cout << "Choix 1"<<endl;
			break;
		}
		case 2:{
			cout << "Choix 2"<<endl;
			break;
		}
		case 3:{
			cout << "Choix 3"<<endl;
			break;
		}
		case 4:{
			cout << "Choix 4"<<endl;
			break;
		}
		case 0:{
			cout << "Au revoir"<<endl;
			break;
		}
		default :{
			cout << "Choix invalide !"<<endl;
			break;
		}
	}
}
/*

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
*/
