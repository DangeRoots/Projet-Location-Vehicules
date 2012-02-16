#include <iostream>
#include <fstream>
#include <list>
#include <vector> // Constructeur
// #include <iomanip> // setw

using namespace std;

#include <Vehicule.h>
#include <Camion.h>
#include <CDate.h>
#include <Location.h>
#include <Parc.h>


Parc::Parc (fstream &inFile) {
	/*! Déclaration des variables temporaires */
	vector<string> v_donnees;
	vector<string>::iterator i;
	char tmp_type;
	string tmp_immat, tmp_marque, tmp_modele, ligne, donnee;
	int tmp_kilom, tmp_nbPlaces;
	float tmp_volumeUtile, tmp_poidsUtile;
		
	// Lecture fichier et création des objets
	getline(inFile,ligne);
	i = v_donnees.begin();
	while (!inFile.eof()) {	
		// création du stringstream
		stringstream ss(ligne); 
		while (ss.good()) {
			// lecture des données temporaires
			ss >> donnee;
			v_donnees.push_back(donnee);
			// tests
			// création du véhicule et de la Location
			tmp_type = *i;
			v_donnees.pop_back();
			tmp_immat = *i;
			v_donnees.pop_back();
			tmp_marque = *i;
			v_donnees.pop_back();
			tmp_modele = *i;
			v_donnees.pop_back();
			tmp_kilom = *i;
			v_donnees.pop_back();
			if (tmp_type == 'c') {
				tmp_poidsUtile = *i;
				v_donnees.pop_back();
				tmp_volumeUtile = *i;
				v_donnees.pop_back();
				//float poids, float volume, string immat, string marque, string modele, int kilom)
				Camion c(tmp_poidsUtile, tmp_volumeUtile, tmp_immat, tmp_marque, tmp_modele, tmp_kilom);
				m_parcAuto.push_back(c);
			} else if (tmp_type == 'u') {
				//float volume, string immat, string marque, string modele, int kilom
				tmp_volumeUtile = *i;
				v_donnees.pop_back();
				Utilitaire u(tmp_volumeUtile, tmp_immat, tmp_marque, tmp_modele, tmp_kilom);
				m_parcAuto.push_back(u);
			} else if (tmp_type == 'v') {
				// VP(string immat, string marque, string modele, int kilometrage, int nbPlaces);
				tmp_nbPlaces = *i;
				v_donnees.pop_back();
				VP v(tmp_immat, tmp_marque, tmp_modele, tmp_kilom, tmp_nbPlaces);
				m_parcAuto.push_back(v);
			}
			// insertion dans la liste
		}
		getline(fichier,ligne);
		v_donnees.clear();
		i = v_donnees.begin();
	}
}

Parc::Parc () {
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

void Parc::afficher() {}

void Parc::afficherLoues (CDate dateDebut, CDate dateFin) {}

void Parc::afficherDisponibles (CDate dateDebut, CDate dateFin) {}

void Parc::afficherRestituables(CDate today) {}

bool Parc::sauvegarderParc() {
	return true;
}
