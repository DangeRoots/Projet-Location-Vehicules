using namespace std;

#include <Vehicule.h>

Vehicule::Vehicule (string immat, string marque, string modele) {
	m_immatriculation = immat;
	m_marque = marque;
	m_modele = modele;
}

Vehicule::Vehicule () {
	m_immatriculation = "";
	m_marque = "";
	m_modele = "";
}

Vehicule::~Vehicule() {
#ifdef DEBUG
	cout << "Destructeur de Vehicule" << endl;
#endif
}

string Vehicule::getImmatriculation() {
	return m_immatriculation;
}

void Vehicule::setImmatriculation(string immat) {
	m_immatriculation = immat;
}

string Vehicule::getMarque() {
	return m_marque;
}

void Vehicule::setMarque(string marque) {
	m_marque = marque;
}

string Vehicule::getModele() {
	return m_modele;
}

void Vehicule::setModele(string modele) {
	m_modele = modele;
}

bool Vehicule::operator==(const Vehicule &veh) {
	return (m_immatriculation == veh.m_immatriculation);
}

void Vehicule::afficher() {
	cout << left
		 << setw(10) << m_marque
		 << setw(9) << m_modele 
		 << setw(10) << m_immatriculation;
}

void Vehicule::save(fstream &fs) {
	fs << m_immatriculation << " " << m_marque << " " <<  m_modele << " ";
} 
