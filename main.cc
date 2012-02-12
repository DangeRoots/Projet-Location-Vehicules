#include <iostream>

using namespace std;

#include <Vehicule.h>
#include <Utilitaire.h>
#include <Camion.h>
#include <VP.h>
#include <CDate.h>
#include <Location.h>

int main() {
	// Déclarations et variables
	// Constructeurs par défaut
	Vehicule v1; 
	Utilitaire u2;
	Camion c1;
	VP vp1;
	Location loc1;
	
	// Constructeurs avec paramètres
	Vehicule v2("1234XY33", "Peugeot", "304", 22212);
	Utilitaire u1(10.0, "IMMAT_U1", "MARQUE_U1", "MODELE_U1", 200);
	Camion c2(12,12,"IMMAT_CAMION2", "Marque_camion2", "Modele_camion2", 100);
	VP vp2("0012ZZ87", "Porshe", "911 Carrera", 80000, 2 );
	// Location(Vehicule vehicule, 
	//			CDate dateDepart, 
	//			CDate dateRetourPrevu, 
	//			CDate dateRetourReel, 
	//			int kmDepart, 
	//			int kmRetour)
	// Location avec Véhicule
	Location loc2(v2, CDate(12,2,2012), CDate(17,2,2012), CDate(), 10000, -1);
	// Location avec Utilitaire
	Location loc3(u1, CDate(12,2,2012), CDate(17,2,2012), CDate(), 10000, -1);
	// Location avec Camion
	Location loc4(c2, CDate(12,2,2012), CDate(17,2,2012), CDate(), 10000, -1);
	// Location avec VP
	Location loc5(vp2, CDate(12,2,2012), CDate(17,2,2012), CDate(), 10000, -1);
	
	// Fonctions et méthodes
	cout << "---------------------" << endl;
	v1.setKilometrage(10);
	v1.setImmatriculation("IMMAT_V1");
	v1.setMarque("Renault");
	v1.setModele("Plastique");
	cout << "Vehicule sans param" << endl;
	v1.afficher();
	cout << "Vehicule avec param" << endl;
	v2.afficher();
	cout << "---------------------" << endl;
	cout << "Utilitaire avec param" << endl;
	u1.afficher();
	cout << "Utilitaire sans param" << endl;
	u2.afficher();
	cout << "-- Modification du kilométrage --" << endl;
	u2.setKilometrage(30);
	u2.afficher();
	cout << "---------------------" << endl;
	cout << "Camion avec param" << endl;
	c2.afficher();
	cout << "Camion sans param" << endl;
	c1.afficher();
	cout << "-- Modification du poids utile --" << endl;
	c1.setPoidsUtile(12);
	c1.afficher();
	cout << "---------------------" << endl;
	cout << "VP sans param" << endl;
	vp1.afficher();
	cout << "---------------------" << endl;
	cout << "VP avec paramètre" << endl;
	vp2.afficher();
	cout << "-- Modification du nombre de places --" << endl;
	vp1.setNbPlaces(3);
	vp1.afficher();
	
	// Tester l'héritage de méthode
	// setKilometrage : classe Vehicule
	// vp1 : classe VP
	vp1.setKilometrage(10000);
	cout << "-- Tests de fonctions héritées --" << endl;
	cout << "Camion sans param" << endl;
	c1.afficher();
	cout << "Camion sans param" << endl;
	c1.setKilometrage(10000);
	c1.afficher();
	loc2.afficher();
	loc1.afficher();
}
