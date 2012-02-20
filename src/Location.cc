using namespace std;

#include <Location.h>

Location::Location() {
	CDate d;
	m_dateDepart = d;
	m_dateRetourPrevu = d;
	m_dateRetourReel = d;
}

Location::Location(	Vehicule *vehicule, 
					CDate dateDepart, 
					CDate dateRetourPrevu, 
					CDate dateRetourReel) {
	m_vehicule = vehicule;
	m_dateDepart = dateDepart;
	m_dateRetourPrevu = dateRetourPrevu;
	m_dateRetourReel = dateRetourReel;
}

Location::~Location() {
}

Vehicule* Location::getVehicule() {
	return m_vehicule;
}	

void Location::setVehicule(Vehicule *veh) {
	m_vehicule = veh;
}

CDate Location::getDate(char type) {
	switch (type){
		case 'd':
			return m_dateDepart;
			break;
		case 'r':
			return m_dateRetourReel;
			break;
		case 'p':
			return m_dateRetourPrevu;
			break;
		default:
			throw erreur(1);
		}
}

void Location::setDate(CDate date, char type) {
	switch (type){
		case 'd':
			m_dateDepart = date;
			break;
		case 'r':
			m_dateRetourReel = date;
			break;
		case 'p':
			m_dateRetourPrevu = date;
			break;
		default:
			throw erreur(1);
		}
}

void Location::afficher() {
	m_vehicule->afficher();
	cout << "Date de départ : ";
	if (m_dateDepart == CDate(0,0,0))
		cout << "Véhicule disponible" << endl;
	else
		m_dateDepart.afficher();
	cout << "Date de retour prévu : ";
	m_dateRetourPrevu.afficher();
	cout << "Date de retour réel : ";
	if (m_dateRetourReel == CDate(0,0,0))
		cout << "Véhicule non restitué" << endl;
	else
		m_dateRetourReel.afficher();
}
