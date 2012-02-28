using namespace std;

#include <Parc.h>

Parc::Parc (fstream &inFile) {
	/*! Déclaration des variables temporaires */
	string t_type, t_immat, t_marque, t_modele, donnee;
	int t_kilom, t_nbPlaces;
	float t_volumeUtile, t_poidsUtile;
	
	/*! Lecture du fichier et création des  véhicules*/
	inFile >> t_type;
	while (!inFile.eof()) {	
		inFile >> t_immat;
		inFile >> t_marque;
		inFile >> t_modele;
		inFile >> t_kilom;
		if (t_type == "c") { // Données spécifiques aux camions
			inFile >> t_poidsUtile;
			inFile >> t_volumeUtile;
			m_parcAuto.push_back(Location(new Camion(t_poidsUtile,t_volumeUtile, t_immat, t_marque, t_modele), t_kilom));
		} else if (t_type == "u") { // Données spécifiques aux utilitaires
			inFile >> t_volumeUtile;
			m_parcAuto.push_back(Location(new Utilitaire(t_volumeUtile, t_immat, t_marque, t_modele), t_kilom));
		} else if (t_type == "v") { // Données spécifiques aux VP
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
	// @TODO
}

void Parc::ajouterLocation () {
	// Déclaration des variables temporaires
	char t_type;
	string t_marque, t_modele, t_immat;
	int t_kilom, t_nbPlaces = 0;
	// string t_kilom, t_nbPlaces = 0;
	float t_poidsUtile, t_volumeUtile;
	bool existe = true;
	while (t_type != 'c' && t_type != 'v' && t_type != 'u') {
		cout << "Type de véhicule (v/c/u) : ";
		cin >> t_type;
		if (t_type != 'c' && t_type != 'v' && t_type != 'u')
			cout << "Type incorrect ! " << endl;
	}
	while (existe) {
		cout << "Immatriculation  : ";
		cin >> t_immat;
		Tools::stringToUpper(t_immat);
		Location tmp;
		existe = rechercherLocation(t_immat,tmp);
		if (existe)
			cout << "Véhicule existant !" << endl;
	}
	cout << "Marque  : ";
	cin >> t_marque;
	cout << "Modele  : ";
	cin >> t_modele;
	Tools::stringToUpper(t_marque);
	Tools::stringToUpper(t_modele);
	cout << "Kilométrage  : ";
	cin >> t_kilom;
	if (t_type == 'c') {
		cout << "Poids  : ";
		cin >> t_poidsUtile;
		cout << "Volume  : ";
		cin >> t_volumeUtile;
		m_parcAuto.push_back(Location(new Camion(t_poidsUtile,t_volumeUtile, t_immat, t_marque, t_modele), t_kilom));
	} else if (t_type == 'v') {
		while (t_nbPlaces < 1) {
			cout << "Nombre de places  : ";
			cin >> t_nbPlaces;
			if (t_nbPlaces < 1 ) {
				cout << "Nombre de places insuffisant" << endl;
				t_nbPlaces = 0;
			}
		}
		m_parcAuto.push_back(Location(new VP(t_immat, t_marque, t_modele, t_nbPlaces), t_kilom));
	} else if (t_type == 'u') {
		cout << "Volume  : ";
		cin >> t_volumeUtile;
		m_parcAuto.push_back(Location(new Utilitaire(t_volumeUtile, t_immat, t_marque, t_modele), t_kilom));
	}
	cout << "Véhicule ajouté !" << endl;
}


bool Parc::supprimerLocation (Location loc) {
	return true;
}

void Parc::modifierLocation (Location loc) {
}

bool Parc::rechercherLocation(string immat, Location &loc) {
	bool trouve = false;
	m_parcAutoI=m_parcAuto.begin();
	while(!trouve && m_parcAutoI !=m_parcAuto.end()) {
		if (m_parcAutoI->getVehicule()->getImmatriculation() == immat) {
			trouve = true;
			loc = *m_parcAutoI;
		}
		else m_parcAutoI++;
	}
	return trouve;
}

void Parc::afficher() {
	for (m_parcAutoI=m_parcAuto.begin();m_parcAutoI !=m_parcAuto.end(); m_parcAutoI++) {
		m_parcAutoI->afficher();
	}
}

void Parc::sauvegarder(fstream &inFile) {
	for (m_parcAutoI=m_parcAuto.begin();m_parcAutoI !=m_parcAuto.end(); m_parcAutoI++) {
		m_parcAutoI->save(inFile);
	}
}
