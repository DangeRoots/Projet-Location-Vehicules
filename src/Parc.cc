using namespace std;

#include <Parc.h>

Parc::Parc (fstream &inFile) {
	/*! Déclaration des variables temporaires */
	string t_type, t_immat, t_marque, t_modele, donnee;
	int t_kilom, t_nbPlaces;
	float t_volumeUtile, t_poidsUtile;
	
	/*! Traitement du fichier */
	inFile >> t_type;
	while (!inFile.eof()) {	
		inFile >> t_immat;
		inFile >> t_marque;
		inFile >> t_modele;
		inFile >> t_kilom;
		if (t_type == "c") { // ajout des variables spécifiques aux camions
			inFile >> t_poidsUtile;
			inFile >> t_volumeUtile;
			m_parcAuto.push_back(Location(new Camion(t_poidsUtile,t_volumeUtile, t_immat, t_marque, t_modele), t_kilom));
		} else if (t_type == "u") { // ajout des variables spécifiques aux utilitaires
			inFile >> t_volumeUtile;
			m_parcAuto.push_back(Location(new Utilitaire(t_volumeUtile, t_immat, t_marque, t_modele), t_kilom));
		} else if (t_type == "v") { // ajout des variables spécifiques aux VP
			inFile >> t_nbPlaces;
			m_parcAuto.push_back(Location(new VP(t_immat, t_marque, t_modele, t_nbPlaces), t_kilom));
		}
		inFile >> t_type;
	}
}

Parc::Parc() {
#ifdef DEBUG
	cout << "Destructeur de parc" << endl;
#endif
}

Parc::~Parc () {
}

void Parc::ajouterLocation (Location loc) {
	m_parcAuto.push_back(loc);
}

bool Parc::supprimerLocation (Location loc) {
	return true;
}

void Parc::modifierLocation (Location loc) {
}

/*
Location rechercherLocation(char type, CDate dateDepart, CDate dateRetour) {
}
*/

void Parc::afficher() {
	for (m_parcAutoI=m_parcAuto.begin();m_parcAutoI !=m_parcAuto.end(); m_parcAutoI++) {
		m_parcAutoI->afficher();
	}
}

void Parc::sauvegarderParc(fstream &inFile) {
	for (m_parcAutoI=m_parcAuto.begin();m_parcAutoI !=m_parcAuto.end(); m_parcAutoI++) {
		// chaque donnée unitaire
	}
}
