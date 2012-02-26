#include <iostream>

using namespace std;

#include <Parc.h>
#include <ListeReservations.h>
#include <Location.h>

int main(int argc, char *argv[]) {
		
	if (argc < 2) {
		cerr << "Argument manquant : chemin/vers/fichier/locations ! Impossible de poursuivre !" << endl;
		exit (-1);
	}

	fstream vehFile, resaFile;
	string nomFichierVeh = "res/Vehicule.data";
	string nomFichierResa = "res/Reservations.data";
	
	
	vehFile.open(nomFichierVeh.c_str(),ios::in);
	resaFile.open(nomFichierResa.c_str(),ios::in);
	
	if (vehFile.fail()) {
		cerr << "Ouverture du fichier " << nomFichierVeh << " impossible : fichier introuvable !" << endl;
		exit (-2);
	}
	if (resaFile.fail()) {
		cerr << "Ouverture du fichier " << nomFichierResa << " impossible : fichier introuvable !" << endl;
		exit (-2);
	}
	Parc p1(vehFile);
	vehFile.close();
	ListeReservations resa(resaFile);
	resaFile.close();
	
	// cout << "--- avant ajout ---" << endl;
	cout 	<< "MARQUE "
			<< "MODÈLE "
			<< "IMMAT. "
			<< "Nb PLACES (VP) "
			<< "VOLUME "
			<< "POIDS " 
			<< "KILOMÉTRAGE" << endl;
			
	p1.afficher();
	
	/*
	int done = 1;
	while (done != 0) {
		cout << "----- Ajout véhicule -----" << endl;
		p1.ajouterLocation();
		cout << "autre ajout (0 pour arrêter) ?" << endl;
		cin >> done;
	}


	cout << "--- après ajout ---" << endl;
	p1.afficher();

	vehFile.open(nomFichierVeh.c_str(),ios::out);
	if (vehFile.fail()) {
		cerr << "Ouverture du fichier " << nomFichierVeh << " impossible : fichier introuvable !" << endl;
		exit (-2);
	}
	cout << "Sauvegarde fichier" << endl;
	p1.sauvegarder(vehFile);
	cout << "Fin Sauvegarde fichier" << endl;
	*/	
}
	
