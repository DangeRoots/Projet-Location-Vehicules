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

int main(int argc, char *argv[]) {
	// Déclarations et variables
	// Constructeurs par défaut
	//~ Vehicule v1; 
	//~ Utilitaire u2;
	//~ Camion c1;
	//~ VP vp1;
	//~ Location loc1;

	
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
	//~ Location loc2(new Vehicule("1234XY33", "Peugeot", "304", 22212),CDate(),CDate(),CDate());
	// Location avec Utilitaire
	//~ Location loc3(new Utilitaire(10, "IMMAT_U1", "MARQUE_U1", "MODELE_U1", 200),CDate(),CDate(),CDate());
	// Location avec Camion
	//~ Location loc4(new Camion(12, 12,"IMMAT_CAMION2", "Marque_camion2", "Modele_camion2", 100),CDate(),CDate(),CDate());
	// Location avec VP
	//~ Location loc5(new VP("0012ZZ87", "Porshe", "911 Carrera", 80000, 2),CDate(),CDate(),CDate());
	
	//~ cout << "Affichage Vehicule -----------" << endl;
	//~ loc2.afficher();
	//~ cout << endl;
	//~ cout << "Affichage VP -----------" << endl;
	//~ loc5.afficher();
	//~ cout << endl;
	//~ cout << "Affichage Camion -----------" << endl;
	//~ loc4.afficher();
	//~ cout << endl;
	//~ cout << "Affichage Utilitaire -----------" << endl;
	//~ loc3.afficher();
	//~ cout << endl;
	//~ 
	//~ cout << "-- affichage locations --" << endl;
	//~ loc5.afficher();
	//~ loc2.afficher();
	//~ loc3.afficher();
	//~ loc4.afficher();
	//~ 
	//~ bool res = p1.ajouterLocation(loc5);
	//~ res = p1.ajouterLocation(loc2);
	//~ res = p1.ajouterLocation(loc3);
	//~ res = p1.ajouterLocation(loc4);
	//~ p1.afficher();
	
	if (argc < 2) {
		cerr << "Argument manquant : chemin/vers/fichier/transactions ! Impossible de poursuivre !" << endl;
		exit (-1);
	}

	fstream fichierEntrant;
	string nomFichier = argv[1];
	
	fichierEntrant.open(nomFichier.c_str(),ios::in);
	if (fichierEntrant.fail()) {
		cerr << "Ouverture du fichier " << nomFichier << " impossible : fichier introuvable !" << endl;
		exit (-2);
	}
	Parc p1(fichierEntrant);
	fichierEntrant.close();
	
	p1.afficher();
}
