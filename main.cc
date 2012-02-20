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
	
	if (argc < 2) {
		cerr << "Argument manquant : chemin/vers/fichier/locations ! Impossible de poursuivre !" << endl;
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
	
