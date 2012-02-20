using namespace std;

#include <Parc.h>

Parc::Parc (fstream &inFile) {
	/*! Déclaration des variables temporaires */
	string tmp_type, tmp_immat, tmp_marque, tmp_modele, donnee;
	int tmp_kilom, tmp_nbPlaces;
	float tmp_volumeUtile, tmp_poidsUtile;
		
	// Lecture fichier et création des objets
	inFile >> tmp_type;
	// getline(inFile,ligne);
	// i = v_donnees.begin();
	while (!inFile.eof()) {	
		// création du stringstream
		inFile >> tmp_immat;
		inFile >> tmp_marque;
		inFile >> tmp_modele;
		inFile >> tmp_kilom;
		if (tmp_type == "c") { // ajout des variables spécifiques aux camions
			inFile >> tmp_poidsUtile;
			inFile >> tmp_volumeUtile;
			Camion c(tmp_poidsUtile,tmp_volumeUtile, tmp_immat, tmp_marque, tmp_modele, tmp_kilom);
			m_parcAuto.push_back(Location(c, CDate(), CDate(), CDate()));
		} else if (tmp_type == "u") { // ajout des variables spécifiques aux utilitaires
			inFile >> tmp_volumeUtile;
			Utilitaire u(tmp_volumeUtile, tmp_immat, tmp_marque, tmp_modele, tmp_kilom);
			m_parcAuto.push_back(Location(u, CDate(), CDate(), CDate()));
		} else if (tmp_type == "v") { // ajout des variables spécifiques aux VP
			inFile >> tmp_nbPlaces;
			VP v(tmp_immat, tmp_marque, tmp_modele, tmp_kilom, tmp_nbPlaces);
			m_parcAuto.push_back(Location(v, CDate(), CDate(), CDate()));
		}
		inFile >> tmp_type;
	}
}

Parc::Parc() {
}

Parc::~Parc () {
}

bool Parc::ajouterLocation (Location loc) {
	m_parcAuto.push_back(loc);
	return true;
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
	for (m_parcAutoI=m_parcAuto.begin();m_parcAutoI !=m_parcAuto.end(); m_parcAutoI++)
		m_parcAutoI->afficher();
}

void Parc::afficherLoues (CDate dateDebut, CDate dateFin) {}

void Parc::afficherDisponibles (CDate dateDebut, CDate dateFin) {}

void Parc::afficherRestituables(CDate today) {}

bool Parc::sauvegarderParc() {
	return true;
}
