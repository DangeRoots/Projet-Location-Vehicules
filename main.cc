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
	// Camion(float poids, float volume, string immat, string marque, string modele, int kilom);
	//~ Camion c2(12, 12,"IMMAT_CAMION2", "Marque_camion2", "Modele_camion2", 100);
	// Utilitaire(float volume, string immat, string marque, string modele, int kilom);
	//~ Utilitaire u1(10, "IMMAT_U1", "MARQUE_U1", "MODELE_U1", 200);
	// VP(string immat, string marque, string modele, int kilometrage, int nbPlaces);
	//~ VP vp2("0012ZZ87", "Porshe", "911 Carrera", 80000, 2);
	
	// Location(Vehicule *vehicule, CDate dateDepart, CDate dateRetourPrevu, CDate dateRetourReel);
	// Location avec Véhicule
	Location loc2(new Vehicule("1234XY33", "Peugeot", "304", 22212),CDate(11,02,2012),CDate(13,02,2012),CDate(12,02,2012));
	// Location avec Utilitaire
	Location loc3(new Utilitaire(10, "IMMAT_U1", "MARQUE_U1", "MODELE_U1", 200),CDate(),CDate(),CDate());
	// Location avec Camion
	Location loc4(new Camion(12, 12,"IMMAT_CAMION2", "Marque_camion2", "Modele_camion2", 100),CDate(),CDate(),CDate());
	// Location avec VP
	Location loc5(new VP("0012ZZ87", "Porshe", "911 Carrera", 80000, 2),CDate(),CDate(),CDate());
	
	cout << "Affichage Vehicule -----------" << endl;
	loc2.afficher();
	cout << endl;
	cout << "Affichage VP -----------" << endl;
	loc5.afficher();
	cout << endl;
	cout << "Affichage Camion -----------" << endl;
	loc4.afficher();
	cout << endl;
	cout << "Affichage Utilitaire -----------" << endl;
	loc3.afficher();
	cout << endl;
	
//----------------------------------------------------------------------	
	cout << "---------------------------"<<endl;

	cout << "test erreur"<<endl;
		try{	
			
			(loc2.getDate('y')).afficher();
		}
		catch (erreur a1){
			cerr << "Argument type getDate erroné!"<<endl;
		}

		cout << "Test déroulement programme après try/catch"<<endl;
		loc2.afficher();
		try{
			loc2.setDate(CDate (12,2,2012), 'd');
			loc2.setDate(CDate (13,2,2012), 'r');
			loc2.setDate(CDate (14,2,2012), 'm');
		} 
		catch (erreur a1){
			cerr << "Argument type setDate erroné, conservation de l'ancienne valeur!"<<endl;
			cout << "Mauvais type de date [Rappel: 'd', 'r' ou 'p']"<<endl;
		}

		cout << "Test déroulement programme après try/catch 2"<<endl;
		loc2.afficher();
}
	
