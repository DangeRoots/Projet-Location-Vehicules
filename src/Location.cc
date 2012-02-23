using namespace std;

#include <Location.h>

Location::Location() {
}

Location::Location(	Vehicule *vehicule, 
					int kilom) {
	m_vehicule = vehicule;
	m_kilometrage = kilom;
}

Location::~Location() {
	// cout << "Destruction de Location" << endl;
}

Vehicule* Location::getVehicule() {
	return m_vehicule;
}	

void Location::setVehicule(Vehicule *veh) {
	m_vehicule = veh;
}

void Location::afficher() {
	m_vehicule->afficher();
	cout << "Kilométrage : " << m_kilometrage << endl;
}

void Location::save(fstream &inFile) {
	// fstream fs;
	m_vehicule->save(inFile);
	inFile << m_kilometrage << endl;
}
