using namespace std;

#include <Reservation.h>

Reservation::Reservation (string veh, CDate dateDep, CDate dateRet) {
	m_vehicule = veh;
	m_dateDepart = dateDep;
	m_dateRetour = dateRet;
}

Reservation::Reservation() {
	m_vehicule = "";
	m_dateDepart = CDate();
	m_dateRetour = CDate();
}

Reservation::~Reservation() {
}

void Reservation::setDate (char type, CDate newDate) {
	if (type == 'd')
		m_dateDepart = newDate;
	else
		m_dateRetour = newDate;
}

CDate Reservation::getDate (char type) {
	//Exception à ajouter
	if (type == 'd')
		return m_dateDepart;
	else
		return m_dateRetour;
}

void Reservation::afficher(Parc p) {
	Location loc;
	bool trouve = p.rechercherLocation(m_vehicule,loc);
	if (!trouve)
		cout << "Véhicule inconnu !" << endl;
	else {
		loc.afficher();
		cout << "Date départ : ";
		m_dateDepart.afficher();
		cout << "Date retour : ";
		m_dateRetour.afficher();
	}
	
}
