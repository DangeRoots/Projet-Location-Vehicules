#include <iostream>
#include <fstream>
#include <list>
#include <vector> // Constructeur
// #include <iomanip> // setw

using namespace std;

#include <Vehicule.h>
#include <CDate.h>
#include <Location.h>
#include <Parc.h>


Parc::Parc (fstream &inFile) {
	vector<string> v_donnees;
	string ligne, donnee;
	vector<string>::iterator i;
	//fstream fichier;
	// inFile.open("test.txt");
	getline(inFile,ligne);
	while (!inFile.eof()) {	
		stringstream ss(ligne); 
		while (ss.good()) {
			ss >> donnee;
			v_donnees.push_back(donnee);
		}
		getline(fichier,ligne);
	}
	// Création et initialisation des variables temporaires
	i = v_donnees.begin();
	string tmp_type = *i; // type
	string tmp_immat = *i++; //IMMAT i++
	string tmp_marque = *i++; //MARQUE i++
	string tmp_modele = *i++; //MODELE i++		
	int tmp_kilomD = *i++; //KILOMD i++
	int tmp_kilomA = *i++; //KILOMA i++
	int tmp_nbLoc = *i++; //nbLoc i++

	if (tmp_type == "u") { // utilitaire
		for (; i != v_donnees.end(); i++)
		int tmp_volumeUtile = *i++; //VOLUME UTILE
		int cpt = 1;
		while (cpt <= tmp_nbLoc) {
			int tmp_J = *i++;
			int tmp_M = *i++;
			int tmp_A = *i++;
			CDate tmp_DateDepart(tmp_J,tmp_M,tmp_A);
			tmp_J = *i++;
			tmp_M = *i++;
			tmp_A = *i++;
			CDate tmp_DateRetourPrevu(tmp_J,tmp_M,tmp_A);
			tmp_J = *i++;
			tmp_M = *i++;
			tmp_A = *i++;
			CDate tmp_DateRetourReel(tmp_J,tmp_M,tmp_A);
			Utilitaire u(tmp_volumeUtile, tmp_immat,tmp_marque, tmp_modele,tmp_kilomD);
		}
	} else if (tmp_type == "c") { // camion
		for (; i != v_donnees.end(); i++)
		//VOLUME UTILE
		//POIDS UTILE
		//BOUCLE SUR les dates
	} else {
		for (; i != v_donnees.end(); i++)
		// NBPLACES
		//BOUCLE SUR les dates
	}
	
	for (i = v_donnees.begin(); i != v_donnees.end(); i++)

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
