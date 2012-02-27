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
	m_listeReservationsI = m_listeReservations.begin();
	bool ajouter = true;
	// vérification des réservations existantes et chevauchement des périodes de location
	while (ajouter && (m_listeReservationsI != m_listeReservations.end())) {
		if (res.getVehicule() == m_listeReservationsI->getVehicule()) {
			if (res.getDate('d') == m_listeReservationsI->getDate('d'))
				ajouter = false;
			else if (	res.getDate('d') > m_listeReservationsI->getDate('d') &&
						(res.getDate('d') < m_listeReservationsI->getDate('r') ||
						res.getDate('d') == m_listeReservationsI->getDate('r')))
				ajouter = false;
			else if (	res.getDate('d') < m_listeReservationsI->getDate('d') &&
						(res.getDate('r') > m_listeReservationsI->getDate('d') ||
						res.getDate('r') == m_listeReservationsI->getDate('d')))
				ajouter = false;
			else
				m_listeReservationsI++;
		} else
			m_listeReservationsI++;
	}
	
	// Ajout ou rejet de la réservation
	if (!ajouter) {
		cout << "Réservation impossible : pas de disponibilité aux dates demandées" << endl;
	} else {
		m_listeReservations.push_back(res);
	}
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
