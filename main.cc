#include <iostream>
#include <list>

using namespace std;

#include <Parc.h>
#include <Vehicule.h>
#include <Location.h>
#include <CDate.h>
#include <Utilitaire.h>
#include <Camion.h>
#include <VP.h>

int main() {
	// Déclarations et variables
	// Constructeurs par défaut
	Vehicule v1; 
	Utilitaire u2;
	Camion c1;
	VP vp1;
	Location loc1;
	Parc p1;
	
	// Constructeurs avec paramètres
	// Vehicule(string immat, string marque, string modele, int kilometrage, int nbLocation);
	
	//~ Vehicule v2("1234XY33", "Peugeot", "304", 22212);
	//~ Utilitaire u1(10, "IMMAT_U1", "MARQUE_U1", "MODELE_U1", 200);
	//~ Camion c2(12, 12,"IMMAT_CAMION2", "Marque_camion2", "Modele_camion2", 100);
	//~ VP vp2("0012ZZ87", "Porshe", "911 Carrera", 80000, 2);
	//~ // Location(Vehicule vehicule, CDate dateDepart, CDate dateRetourPrevu, CDate dateRetourReel);
	//~ // Location avec Véhicule
	//~ Location loc5(v2, CDate(),CDate(), CDate());
	//~ // Location avec Utilitaire
	//~ Location loc2(u2, CDate(),CDate(), CDate());
	//~ // Location avec Camion
	//~ Location loc3(c2, CDate(),CDate(), CDate());
	//~ // Location avec VP
	//~ Location loc4(vp2, CDate(),CDate(), CDate());
	//~ 
	//~ cout << "Affichage Vehicule -----------" << endl;
	//~ v2.afficher();
	//~ cout << endl;
	//~ cout << "Affichage VP -----------" << endl;
	//~ vp2.afficher();
	//~ cout << endl;
	//~ cout << "Affichage Camion -----------" << endl;
	//~ c2.afficher();
	//~ cout << endl;
	//~ cout << "Affichage Utilitaire -----------" << endl;
	//~ u1.afficher();
	//~ cout << endl;
	//~ /*
	
	
}
