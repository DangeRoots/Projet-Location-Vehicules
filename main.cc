#include <iostream>

using namespace std;

#include <Parc.h>
#include <ListeReservations.h>
#include <Location.h>
#include <Reservation.h>
#include <LocException.h>
#include <LocMenu.h>
#include <Tools.h>

int main(int argc, char *argv[]) {
	
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

	// Création instance Parc (véhicule)
	Parc p1(vehFile);
	vehFile.close();
	cout << "Fichier des véhicules chargé" << endl;
	
	// Création instance Réservation (immat + date)
	ListeReservations resa(resaFile);
	resaFile.close();
	cout << "Fichier des réservations chargé" << endl;
	
	// Création du menu 
	int choix = -1;	
	
	while (choix != 0){
		LocMenu monMenu;
		// monMenu.afficher();
			
		// boucle de récupération du choix avec contrôle de type
		// j'ai du modifier la méthode récupérer valeur-> elle retourne un string désormais
		// C'est peut-être à factoriser =)
		string t_input = "";
		while(!Tools::estEntier(t_input)){
			monMenu.afficher();
			t_input = monMenu.recupererValeur("Choix : ");
			if (Tools::estEntier(t_input)){
				choix = Tools::stringToInt(t_input);
			} else
				cout  << "Veuillez entrer un nombre !"<< endl;
		}
		monMenu.traiter(choix, p1, resa, nomFichierVeh, nomFichierResa);
	}//while du choix != 0
}
