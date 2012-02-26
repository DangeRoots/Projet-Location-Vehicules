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
}

Vehicule* Location::getVehicule() {
	return m_vehicule;
}	

void Location::setVehicule(Vehicule *veh) {
	m_vehicule = veh;
}

void Location::afficher() {
	m_vehicule->afficher();
	cout << m_kilometrage << endl;
}

bool Location::operator==( Location &loc) {
	return (m_vehicule->getImmatriculation() == loc.getVehicule()->getImmatriculation());
}

void Location::save(fstream &inFile) {
	m_vehicule->save(inFile);
	inFile << m_kilometrage << endl;
}
