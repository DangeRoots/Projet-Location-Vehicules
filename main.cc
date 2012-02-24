#include <iostream>

using namespace std;

#include <Parc.h>
//~ #include <Vehicule.h>
#include <Location.h>
//~ #include <CDate.h>
//~ #include <Utilitaire.h>
//~ #include <Camion.h>
//~ #include <VP.h>

int main(int argc, char *argv[]) {
		
	if (argc < 2) {
		cerr << "Argument manquant : chemin/vers/fichier/locations ! Impossible de poursuivre !" << endl;
		exit (-1);
	}

	fstream vehFile;
	string nomFichier = "res/Vehicule.data";
	
	vehFile.open(nomFichier.c_str(),ios::in);
	if (vehFile.fail()) {
		cerr << "Ouverture du fichier " << nomFichier << " impossible : fichier introuvable !" << endl;
		exit (-2);
	}
	Parc p1(vehFile);
	vehFile.close();
	
	cout << "--- avant ajout ---" << endl;
	p1.afficher();
	
	for (int i=0; i < 10; i++) {
		p1.ajouterLocation(Location(new Camion(i,64,"AAA_DD33", "NEW_CAMION", "NEW_MODELE"), 50*i));
		p1.ajouterLocation(Location(new Utilitaire(i,"AAA_DD33", "NEW_UTIL", "NEW_MODELE"), 50*i));
		p1.ajouterLocation(Location(new VP("AAA_DD33", "NEW_VP", "NEW_MODELE", i), 50*i));
	}
	cout << "--- après ajout ---" << endl;
	p1.afficher();
	
	vehFile.open(nomFichier.c_str(),ios::out);
	if (vehFile.fail()) {
		cerr << "Ouverture du fichier " << nomFichier << " impossible : fichier introuvable !" << endl;
		exit (-2);
	}
	cout << "Sauvegarde fichier" << endl;
	p1.sauvegarder(vehFile);
	cout << "Fin Sauvegarde fichier" << endl;
}
	
