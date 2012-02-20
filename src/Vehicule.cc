using namespace std;

#include <Vehicule.h>

Vehicule::Vehicule (string immat, string marque, string modele, int kilometrage) {
	m_immatriculation = immat;
	m_marque = marque;
	m_modele = modele;
	m_kilometrage = kilometrage;
}

Vehicule::Vehicule () {
	m_immatriculation = "";
	m_marque = "";
	m_modele = "";
	m_kilometrage = 0;
}

Vehicule::~Vehicule() {
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

int Vehicule::getKilometrage() {
	return m_kilometrage;
}

void Vehicule::setKilometrage(int kilom) {
	m_kilometrage = kilom;
}

bool Vehicule::operator==(const Vehicule &veh) {
	return (m_immatriculation == veh.m_immatriculation);
}

void Vehicule::afficher() {
	cout 	<< setw(1) << m_marque << " " << m_modele << endl
			<< "Immatriculation : "	<< setw(9)	<< m_immatriculation << endl
			<< "Kilométrage : " << m_kilometrage << endl;
}
