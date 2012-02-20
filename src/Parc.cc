using namespace std;

#include <Parc.h>

Parc::Parc (fstream &inFile) {
	/*! Déclaration des variables temporaires */
	string t_type, t_immat, t_marque, t_modele, donnee;
	int t_kilom, t_nbPlaces, t_jDep, t_mDep, t_aDep, t_jRetP, t_mRetP, t_aRetP, t_jRetR, t_mRetR, t_aRetR;
	float t_volumeUtile, t_poidsUtile;
	CDate dateDep, dateRetP, dateRetR;
	
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
			lectureDates(	t_jDep, t_mDep,t_aDep,
							t_jRetP, t_mRetP,t_aRetP,
							t_jRetR, t_mRetR, t_aRetR,
							inFile);
			m_parcAuto.push_back(	Location(new Camion(t_poidsUtile,t_volumeUtile, t_immat, t_marque, t_modele, t_kilom), 
									CDate(t_jDep,t_mDep,t_aDep), 
									CDate(t_jRetP, t_mRetP, t_aRetP), 
									CDate(t_jRetR, t_mRetR, t_aRetR)));
		} else if (t_type == "u") { // ajout des variables spécifiques aux utilitaires
			inFile >> t_volumeUtile;
			lectureDates(	t_jDep, t_mDep,t_aDep,
							t_jRetP, t_mRetP,t_aRetP,
							t_jRetR, t_mRetR, t_aRetR,
							inFile);
			m_parcAuto.push_back(	Location(new Utilitaire(t_volumeUtile, t_immat, t_marque, t_modele, t_kilom), 
									CDate(t_jDep,t_mDep,t_aDep), 
									CDate(t_jRetP, t_mRetP, t_aRetP), 
									CDate(t_jRetR, t_mRetR, t_aRetR)));
		} else if (t_type == "v") { // ajout des variables spécifiques aux VP
			inFile >> t_nbPlaces;
			lectureDates(	t_jDep, t_mDep,t_aDep,
							t_jRetP, t_mRetP,t_aRetP,
							t_jRetR, t_mRetR, t_aRetR,
							inFile);
			m_parcAuto.push_back(Location(new VP(t_immat, t_marque, t_modele, t_kilom, t_nbPlaces), 						
											CDate(t_jDep,t_mDep,t_aDep), 
											CDate(t_jRetP, t_mRetP, t_aRetP), 
											CDate(t_jRetR, t_mRetR, t_aRetR)));
		}
		inFile >> t_type;
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
	for (m_parcAutoI=m_parcAuto.begin();m_parcAutoI !=m_parcAuto.end(); m_parcAutoI++) {
		m_parcAutoI->afficher();
		cout << "--------------------" << endl;
	}
}

void Parc::afficherLoues (CDate dateDebut, CDate dateFin) {}

void Parc::afficherDisponibles (CDate dateDebut, CDate dateFin) {}

void Parc::afficherRestituables(CDate today) {}

bool Parc::sauvegarderParc() {
	return true;
}

void Parc::lectureDates(	int &t_jDep, int &t_mDep,int &t_aDep,
							int &t_jRetP, int &t_mRetP,int &t_aRetP,
							int &t_jRetR, int &t_mRetR, int &t_aRetR,
							fstream &inFile) {
			inFile >> t_jDep;
			inFile >> t_mDep;
			inFile >> t_aDep;
			inFile >> t_jRetP;
			inFile >> t_mRetP;
			inFile >> t_aRetP;
			inFile >> t_jRetR;
			inFile >> t_mRetR;
			inFile >> t_aRetR;
}
