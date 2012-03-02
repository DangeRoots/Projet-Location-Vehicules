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

	/*	
	if (argc < 2) {
		cerr << "Argument manquant : chemin/vers/fichier/locations ! Impossible de poursuivre !" << endl;
		exit (-1);
	}
	*/
	
	fstream vehFile, resaFile;
	string nomFichierVeh = "res/Vehicule.data";
	string nomFichierResa = "res/ReservationsDates.data";
	
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
	LocMenu monMenu;
	monMenu.afficher();
	
	// boucle de récupération du choix avec contrôle de type
	// j'ai du modifier la méthode récupérer valeur-> elle retourne un string désormais
	// C'est peut-être à factoriser =)
	string t_input = "";
	while(!Tools::estEntier(t_input)){
		t_input = monMenu.recupererValeur("Choix : ");
		if (Tools::estEntier(t_input)){
			int choix = Tools::stringToInt(t_input);
			cout << choix << endl;
		} else
			cout  << "Veuillez entrer un nombre !"<< endl;
	}
}
	//~ string t_input = "";
	//~ while(!Tools::estReel(t_input)){
		//~ cout << "Volume : ";
		//~ cin >> t_input;
		//~ if (Tools::estReel(t_input)){
			//~ t_volumeUtile = Tools::stringToFloat(t_input);
		//~ } else 
			//~ cout << "Veuillez entrer un nombre !"<< endl;
		//~ }
//~ }
	// Afficher le menu
		// Ajouter un vehicule
		// Enregistrement d'une location (nvelle reservation)
		// Afficher avec un sous menu 
		//		-> tous les veh
		//		-> des veh loués
		//		-> veh loués devant etre restitués
		// Quitter (sauvegarder)

	//~ int done = 1;
	//~ while (done != 0) {
		//~ cout << "*************************************"<<endl;
		//~ cout << "Logiciel de Réservations de Véhicule "<< endl;
		//~ cout << "*************************************"<<endl;
		
		//p1.afficher();
		//cout << "----- Ajout véhicule -----" << endl;
		//p1.ajouterLocation();
		//cout << "autre ajout (0 pour arrêter) ?" << endl;
		//cin >> done;
	//~ }
	//~ cout << "--- après ajout ---" << endl;
	//~ p1.afficher();
//~ 
	//~ vehFile.open(nomFichierVeh.c_str(),ios::out);
	//~ if (vehFile.fail()) {
		//~ cerr << "Ouverture du fichier " << nomFichierVeh << " impossible : fichier introuvable !" << endl;
		//~ exit (-2);
	//~ }
	//~ cout << "Sauvegarde fichier" << endl;
	//~ p1.sauvegarder(vehFile);
	//~ cout << "Fin Sauvegarde fichier" << endl;
	//~ 
	/*
	cout << "-- Tests de disponibilités -- " << endl;
	Reservation testDate("111FE33", CDate(10,01,2012), CDate(10,01,2012));
	cout << endl << "--- liste avant ajout ---" << endl;
	resa.afficher(p1);
	cout << "--- Nouvelle réservation ---" << endl;
	testDate.afficher(p1);
	cout << "10/01/2012 au 10/01/2012 : KO " << resa.ajouterReservation(testDate) << endl;
	testDate.setDate('d', CDate(13,01,2012));
	testDate.setDate('r', CDate(14,01,2012));
	testDate.afficher(p1);
	cout << "13/01/2012 au 14/01/2012 : KO " << resa.ajouterReservation(testDate) << endl;
	testDate.setDate('d', CDate(12,01,2012));
	testDate.setDate('r', CDate(14,01,2012));
	testDate.afficher(p1);
	cout << "12/01/2012 au 14/01/2012 : KO " << resa.ajouterReservation(testDate) << endl;
	testDate.setDate('d', CDate(14,01,2012));
	testDate.setDate('r', CDate(18,01,2012));
	testDate.afficher(p1);
	cout << "14/01/2012 au 18/01/2012 : KO " << resa.ajouterReservation(testDate) << endl;
	testDate.setDate('d', CDate(15,01,2012));
	testDate.setDate('r', CDate(19,01,2012));
	testDate.afficher(p1);
	cout << "15/01/2012 au 19/01/2012 : OK " << resa.ajouterReservation(testDate) << endl;
	cout << endl << "--- liste après ajout ---" << endl;
	resa.afficher(p1);
	
	resaFile.open(nomFichierResa.c_str(),ios::out);
	if (resaFile.fail()) {
		cerr << "Ouverture du fichier " << nomFichierResa << " impossible : fichier introuvable !" << endl;
		exit (-2);
	}
	resa.sauvegarder(resaFile);
	*/
//}
	
