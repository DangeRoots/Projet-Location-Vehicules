using namespace std;

#include <Parc.h>

Parc::Parc (fstream &inFile) {
	/*! Déclaration des variables temporaires */
	// vector<string> v_donnees;
	// vector<string>::iterator i;
	// string 	tmp_type, tmp_immat, tmp_marque, tmp_modele, tmp_kilom, tmp_nbPlaces, tmp_volumeUtile, tmp_poidsUtile, ligne, donnee;
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
		if (tmp_type == "c") {
			inFile >> tmp_poidsUtile;
			inFile >> tmp_volumeUtile;
			Camion c(tmp_poidsUtile,tmp_volumeUtile, tmp_immat, tmp_marque, tmp_modele, tmp_kilom);
			m_parcAuto.push_back(Location(c, CDate(), CDate(), CDate()));
		} else if (tmp_type == "u") {
				//float volume, string immat, string marque, string modele, int kilom
			inFile >> tmp_volumeUtile;
			Utilitaire u(tmp_volumeUtile, tmp_immat, tmp_marque, tmp_modele, tmp_kilom);
			m_parcAuto.push_back(Location(u, CDate(), CDate(), CDate()));
		} else if (tmp_type == "v") {
			inFile >> tmp_nbPlaces;
			VP v(tmp_immat, tmp_marque, tmp_modele, tmp_kilom, tmp_nbPlaces);
			m_parcAuto.push_back(Location(v, CDate(), CDate(), CDate()));
		}
		inFile >> tmp_type;

		
		/*
		stringstream ss(ligne);
		while (ss.good()) {
			// lecture des données temporaires
			ss >> donnee;
			v_donnees.push_back(donnee);
			// tests
			// création du véhicule et de la Location
			tmp_type = *i++;
			// v_donnees.pop_front();
			tmp_immat = *i++;
			// v_donnees.pop_front();
			tmp_marque = *i++;
			// v_donnees.pop_front();
			tmp_modele = *i++;
			// v_donnees.pop_front();
			tmp_kilom = *i++;
			v_donnees.pop_back();
			if (tmp_type == "c") {
				tmp_poidsUtile = *i;
				// v_donnees.pop_front();
				tmp_volumeUtile = *i;
				// v_donnees.pop_front();
				//float poids, float volume, string immat, string marque, string modele, int kilom)
				Camion c(atof(tmp_poidsUtile), atof(tmp_volumeUtile), tmp_immat, tmp_marque, tmp_modele, atoi(tmp_kilom));
				m_parcAuto.push_back(c);
			} else if (tmp_type == "u") {
				//float volume, string immat, string marque, string modele, int kilom
				tmp_volumeUtile = *i;
				v_donnees.pop_back();
				Utilitaire u(tmp_volumeUtile, tmp_immat, tmp_marque, tmp_modele, tmp_kilom);
				m_parcAuto.push_back(u);
			} else if (tmp_type == "v") {
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
		*/
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

void Parc::afficher() {}

void Parc::afficherLoues (CDate dateDebut, CDate dateFin) {}

void Parc::afficherDisponibles (CDate dateDebut, CDate dateFin) {}

void Parc::afficherRestituables(CDate today) {}

bool Parc::sauvegarderParc() {
	return true;
}
