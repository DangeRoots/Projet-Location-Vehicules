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
		inFile >> t_immat;
	}
}

ListeReservations::ListeReservations() {
}

ListeReservations::~ListeReservations() {
}

void ListeReservations::afficher() {
}

void ListeReservations::sauvegarder(fstream &outFile) {
}
