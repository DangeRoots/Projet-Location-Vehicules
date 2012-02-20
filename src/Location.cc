using namespace std;

#include <Location.h>

Location::Location() {
	Vehicule *veh;
	CDate d;
	m_vehicule = veh;
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
	if (type =='d')
		return m_dateDepart;
	if (type == 'r')
		return m_dateRetourReel;
	if (type == 'p')
		return m_dateRetourPrevu;
	else {
		// Pas propre. À transformer en Exception
		cerr << "Type date inconnu : " << type << endl;
		CDate res(0,0,0);
		return res;
	}
}

void Location::setDate(CDate date, char type) {
	if (type == 'd')
		m_dateDepart = date;
	else if (type == 'r')
		m_dateRetourReel = date;
	else if (type == 'p')
		m_dateRetourPrevu = date;
	else {
		cerr << "Type date inconnu : " << type << endl;
	}
}

void Location::afficher() {
	cout << "Véhicule" << endl;
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
