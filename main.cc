#include <iostream>

using namespace std;

#include <Parc.h>
#include <Location.h>

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
/*
	cout << right
			<< setw(12) << "MARQUE"
			<< setw(12) << "MODÈLE"
			<< setw(12) << "IMMAT."
			<< setw(12) << "Nb PLACES (VP)"
			<< setw(12) << "VOLUME"
			<< setw(12) << "POIDS" 
			<< setw(12) << "KILOMÉTRAGE" << endl;
			*/
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
*/	
	vehFile.open(nomFichier.c_str(),ios::out);
	if (vehFile.fail()) {
		cerr << "Ouverture du fichier " << nomFichier << " impossible : fichier introuvable !" << endl;
		exit (-2);
	}
	cout << "Sauvegarde fichier" << endl;
	p1.sauvegarder(vehFile);
	cout << "Fin Sauvegarde fichier" << endl;
}
	
