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

/*
ListeReservations::ListeReservations() {
}
*/

ListeReservations::~ListeReservations() {
}

bool ListeReservations::ajouterReservation (Reservation res) {
	m_listeReservationsI = m_listeReservations.begin();
	bool ajouter = true;
	// Cohérence des dates
	if (res.getDate('d') > res.getDate('r')) {
		ajouter = false;
		cout << "La date de retour doit être supérieure ou égale à la date de départ." << endl;
	} else {
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
	}
	return ajouter;
}

void ListeReservations::afficher(Parc p) {
	if (m_listeReservations.empty())
		cout << "Aucune réservation !" << endl;
	else {
		char typeRech;
		// demander type de recherche : toutes, par date, restituables
		while (typeRech != 'r' && typeRech != 'd' && typeRech != 'a' && typeRech != 't') {
			cout << "Que souhaitez vous afficher : " << endl;
			cout << "- (R)éservations à une date particulière" << endl;
			cout << "- (D)isponibilités à une date particulière" << endl;
			cout << "- R(e)stituables (a)ujourd'hui" << endl;
			cout << "- (T)outes les réservations" << endl;
			cin >> typeRech;
			Tools::charToLower(typeRech);
			if (typeRech != 'r' && typeRech != 'd' && typeRech != 'a' && typeRech != 't')
				cout << "Type incorrect ! " << endl;
		}
		cout << typeRech << endl;
		
		if (typeRech == 't') {
			// afficher tous
			cout << "--- Toutes les réservations ---" << endl;
			for (	m_listeReservationsI = m_listeReservations.begin();
					m_listeReservationsI != m_listeReservations.end();
					m_listeReservationsI++) {
			m_listeReservationsI->afficher(p);
			}
		} else if (typeRech == 'a') {
			// véhicule restituables
			CDate d;
			d = CDate::today();
			cout << "--- Réservations du ";
			d.afficher();
			cout << " ---------------------------------" << endl;
			for (	m_listeReservationsI = m_listeReservations.begin();
					m_listeReservationsI != m_listeReservations.end();
					m_listeReservationsI++) {
				if (m_listeReservationsI->getDate('r') == d)
					m_listeReservationsI->afficher(p);
			}
		} else if (typeRech =='r') {
			// réservés à une date donnée
			int j, m, a;
			cout << "Date de recherche (J M A) : ";
			cin >> j;
			cin >> m;
			cin >> a;
			CDate d(j,m,a);
			cout << "--- Réservations du ";
			d.afficher();
			cout << " ---------------------------------" << endl;
			for (	m_listeReservationsI = m_listeReservations.begin();
					m_listeReservationsI != m_listeReservations.end();
					m_listeReservationsI++) 
				{
				if (m_listeReservationsI->getDate('d') == d ||
					m_listeReservationsI->getDate('r') == d ||
					(m_listeReservationsI->getDate('d') > d && m_listeReservationsI->getDate('r') < d))
					m_listeReservationsI->afficher(p);
			}
		} else if (typeRech == 'd'){
			// disponibles à une date donnée
			int j, m, a;
			cout << "Date de recherche (J M A) : ";
			cin >> j;
			cin >> m;
			cin >> a;
			CDate d(j,m,a);
			cout << "--- Disponibilités du ";
			d.afficher();
			cout << " ---" << endl;

			for (	m_listeReservationsI = m_listeReservations.begin();
					m_listeReservationsI != m_listeReservations.end();
					m_listeReservationsI++) 
				{
				if (m_listeReservationsI->getDate('d') < d &&
					m_listeReservationsI->getDate('r') > d)
					m_listeReservationsI->afficher(p);
			}
		}
	}
}

void ListeReservations::sauvegarder(string nomFichier) {
	fstream resaFile;
	resaFile.open(nomFichier.c_str(),ios::out);

	if (resaFile.fail()) {
		cerr << "Ouverture du fichier " << nomFichier << " impossible : fichier introuvable !" << endl;
		exit (-2);
	}
	for (m_listeReservationsI = m_listeReservations.begin();m_listeReservationsI != m_listeReservations.end();m_listeReservationsI++) {
		m_listeReservationsI->save(resaFile);
	}
	resaFile.close();
}
