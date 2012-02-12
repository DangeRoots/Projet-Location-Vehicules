#include <iostream>

using namespace std;

#include <Vehicule.h>
#include <CDate.h>
#include <Location.h>

Location::Location() {
	
}

Location::Location(	Vehicule vehicule, 
			CDate dateDepart, 
			CDate dateRetourPrevu, 
			CDate dateRetourReel, 
			int kmDepart, 
			int kmRetour) {
	m_vehicule = vehicule;
	m_dateDepart = dateDepart;
	m_dateRetourPrevu = dateRetourPrevu;
	m_dateRetourReel = dateRetourReel;
	m_kilometreDepart = kmDepart;
	m_kilometreRetour = kmRetour;
}

Location::~Location() {
}

Vehicule Location::getVehicule() {
	return m_vehicule;
}

void Location::setVehicule(Vehicule veh) {
	m_vehicule = veh;
}

CDate Location::getDateDepart() {
	return m_dateDepart;
}

void Location::setDateDepart(CDate dateDepart) {
	m_dateDepart = dateDepart;
}

CDate Location::getDateRetourPrevue() {
	return m_dateRetourPrevu;
}

void Location::setDateRetourPrevue(CDate date) {
	m_dateRetourPrevu = date;
}

CDate Location::getDateRetourReelle() {
	return m_dateRetourReel;
}

void Location::setDateRetourReelle(CDate date) {
	m_dateRetourReel = date;
}

int Location::getKmDepart() {
	return m_kilometreDepart;
}

void Location::setKmDepart(int km) {
	m_kilometreDepart = km;
}

int Location::getKmRetour() {
	return m_kilometreRetour;
}

void Location::setKmRetour(int kilom) {
	m_kilometreRetour = kilom;
}

void Location::afficher() {
}
