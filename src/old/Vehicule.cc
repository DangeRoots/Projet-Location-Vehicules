#include <iostream>

using namespace std;

#include "../inc/Vehicule.h"
// #include <Vehicule.h>

Vehicule::Vehicule (const string couleur, 
					char boiteVitesse) {
	m_couleur = couleur;
	m_boiteVitesse = boiteVitesse;
}

Vehicule::Vehicule () {
	m_couleur = "";
	m_boiteVitesse = ' ';
}

Vehicule::~Vehicule() {
}

string Vehicule::getCouleur() {
	return m_couleur;
}

char Vehicule::getBoiteVitesse() {
	return m_boiteVitesse;
}
