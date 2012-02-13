#include <iostream>
#include <list>

using namespace std;

#include <Vehicule.h>
#include <CDate.h>
#include <Location.h>
#include <Parc.h>

/*
	list<Location> listeVehicule;
*/

Parc::Parc (list<Location> listeVehicule) {
}

Parc::Parc () {
}
					
Parc::~Parc () {
}

bool Parc::chargerParc() {
	return true;
}
	
void Parc::ajouterVehicule (Location vehicule) {
}

void Parc::supprimerVehicule (Location vehicule) {
}

void Parc::modifierVehicule (Location vehicule) {
}
	
Location Parc::rechercherVehicule(char type, CDate dateDepart, CDate dateRetour) {
	Location truc;
	return truc;
}
			
void Parc::afficherParc () {
}
					
void Parc::afficherLoues (CDate dateDebut, CDate dateFin) {
}
							
void Parc::afficherDisponibles (CDate dateDebut, CDate dateFin) {
}
									
void Parc::afficherRestituables(CDate today) {
}
											
bool Parc::sauvegarderParc() {
	return true;
}
