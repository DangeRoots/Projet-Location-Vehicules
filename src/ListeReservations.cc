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
