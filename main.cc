#include <iostream>

using namespace std;

#include <Parc.h>
#include <ListeReservations.h>
#include <Location.h>
#include <Reservation.h>

int main(int argc, char *argv[]) {
		
	if (argc < 2) {
		cerr << "Argument manquant : chemin/vers/fichier/locations ! Impossible de poursuivre !" << endl;
		exit (-1);
	}

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

	Parc p1(vehFile);
	vehFile.close();
	ListeReservations resa(resaFile);
	resaFile.close();
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
	
	cout << "-- Tests de disponibilités -- " << endl;
	Reservation testDate("111FE33", CDate(10,01,2012), CDate(15,01,2012));
	cout << endl << "--- liste avant ajout ---" << endl;
	resa.afficher(p1);
	cout << "--- Nouvelle réservation ---" << endl;
	testDate.afficher(p1);
	cout << "10/01/2012 au 15/01/2012 : KO " << resa.ajouterReservation(testDate) << endl;
	testDate.setDate('d', CDate(10,01,2012));
	testDate.setDate('r', CDate(14,01,2012));
	testDate.afficher(p1);
	cout << "10/01/2012 au 14/01/2012 : KO " << resa.ajouterReservation(testDate) << endl;
	testDate.setDate('d', CDate(10,01,2012));
	testDate.setDate('r', CDate(13,01,2012));
	testDate.afficher(p1);
	cout << "10/01/2012 au 13/01/2012 : KO " << resa.ajouterReservation(testDate) << endl;
	testDate.setDate('d', CDate(10,01,2012));
	testDate.setDate('r', CDate(12,01,2012));
	testDate.afficher(p1);
	cout << "10/01/2012 au 12/01/2012 : KO " << resa.ajouterReservation(testDate) << endl;
	testDate.setDate('d', CDate(10,01,2012));
	testDate.setDate('r', CDate(11,01,2012));
	testDate.afficher(p1);
	cout << "10/01/2012 au 11/01/2012 : OK " << resa.ajouterReservation(testDate) << endl;
	cout << endl << "--- liste après ajout ---" << endl;
	resa.afficher(p1);
	resa.sauvegarder(resaFile);
}
	
