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
	
	p1.afficher();
	
	p1.ajouterLocation(Location(new Camion(15000,32, "777DD33", "NEW_MARQUE", "NEW_MODELE"), 50000));
	p1.afficher();
	
	vehFile.open(nomFichier.c_str(),ios::out);
	if (vehFile.fail()) {
		cerr << "Ouverture du fichier " << nomFichier << " impossible : fichier introuvable !" << endl;
		exit (-2);
	}
	p1.sauvegarderParc(vehFile);
	// p1.sauvegarderParc();
}
	
