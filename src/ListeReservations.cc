using namespace std;

#include <ListeReservations.h>

ListeReservations::ListeReservations (fstream &inFile) {
	/*! Déclaration des variables temporaires */
	string t_immat;
	int t_jourDep, t_moisDep, t_anneeDep, t_jourRet, t_moisRet, t_anneeRet;
	 
	/*! Lecture du fichier et création des réservations */
	inFile >> t_immat;
	while (!inFile.eof()) {	
		inFile >> t_jourDep;
		inFile >> t_moisDep;
		inFile >> t_anneeDep;
		inFile >> t_jourRet;
		inFile >> t_moisRet;
		inFile >> t_anneeRet;
		m_listeReservations.push_back(Reservation(t_immat,CDate(t_jourDep, t_moisDep, t_anneeDep),
		 												CDate(t_jourRet, t_moisRet, t_anneeRet)));
		// m_listeReservations.push_back(Reservation(t_immat,CDate(),CDate()));
		inFile >> t_immat;
	}
}

ListeReservations::ListeReservations() {
}

ListeReservations::~ListeReservations() {
}

bool ListeReservations::ajouterReservation (Reservation res) {
	bool ajouter = true;
	m_listeReservationsI = m_listeReservations.begin();
	
	while (ajouter && m_listeReservationsI != m_listeReservations.end()) {
		if (*m_listeReservationsI == res) {
			if (!res.estDisponible(m_listeReservationsI->getDate('d'),m_listeReservationsI->getDate('r'))) {
				ajouter = false;
				cout << "Période indisponible " << ajouter << endl;
			}
		} else {
			cout << "On continue" << endl;
			m_listeReservationsI++;
		}
	}
	
	// On ajoute la réservation dans la liste
	cout << "J'ai terminé de vérifier la liste, je vais ajouter (ou pas)" << endl;
	if (ajouter) {
		m_listeReservations.push_back(res);
		cout << "Ajout dans la liste" << endl;
	} else {
		cout << "Pas d'ajout" << endl;
	}
	// On confirme que l'ajout a été fait
	return ajouter;
}

void ListeReservations::afficher(Parc p) {
	for (m_listeReservationsI = m_listeReservations.begin();m_listeReservationsI != m_listeReservations.end();m_listeReservationsI++) {
		m_listeReservationsI->afficher(p);
	}
}

void ListeReservations::sauvegarder(fstream &outFile) {
	for (m_listeReservationsI = m_listeReservations.begin();m_listeReservationsI != m_listeReservations.end();m_listeReservationsI++) {
		m_listeReservationsI->save(outFile);
	}

}
