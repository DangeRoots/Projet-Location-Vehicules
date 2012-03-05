using namespace std;

#include <LocMenu.h>

LocMenu::LocMenu() {
	entrees.push_back("[1] Ajouter un véhicule");
	entrees.push_back("[2] Créer une nouvelle réservation");
	entrees.push_back("[3] Afficher la liste des véhicules");
	entrees.push_back("[4] Afficher les réservations");
	entrees.push_back("[5] Enregistrer un retour");
	entrees.push_back("[0] Quitter");
}

LocMenu::~LocMenu() {
}

void LocMenu::afficher() {
	cout << "-----------------------------------" << endl;
	cout << "---    Location de véhicules    ---" << endl;
	cout << "-----------------------------------" << endl;
	menuI= entrees.begin();
	while (menuI != entrees.end()){
    cout << *menuI << endl;
    menuI ++;}
}

string LocMenu::recupererValeur(string texte) {
	string c;
	cout << texte <<endl;
	cin >>  c;

	return c;
}

void LocMenu::traiter(int choix, Parc &p, ListeReservations &r, string nomFichierVeh, string nomFichierResa) {
	switch (choix){
		case 1:{ // ajouter un véhicule
			p.ajouterLocation();
			p.sauvegarder(nomFichierVeh);
			break;
		}
		case 2:{ // nouvelle réservation
			string immat;
			bool existe = true;
			int j_Dep, m_Dep, a_Dep;
			int j_Ret, m_Ret, a_Ret;
			cout << "Immatriculation : ";
			cin >> immat;
			Tools::stringToUpper(immat);
			Location tmp_loc;
			existe = p.estDansLeParc(immat,tmp_loc);
			if (!existe) {
				cout << "Réservation impossible : véhicule inexistant !" << endl;
			} else {
				cout << "Date départ (JJ MM AAAA) : ";
				cin >> j_Dep >> m_Dep >> a_Dep;
				cout << "Date retour (JJ MM AAAA) : ";
				cin >> j_Ret >> m_Ret >> a_Ret;
				r.ajouterReservation(Reservation(immat,CDate(j_Dep,m_Dep,a_Dep),CDate(j_Ret,m_Ret,a_Ret)));
				r.sauvegarder(nomFichierResa);
			}
			break;
		}
		case 3:{ // afficher liste des véhicules
			p.afficher();
			break;
		}
		case 4:{ // afficher les réservations
			r.afficher(p);
			break;
		}
		case 5:{ // Enregistrer retour
			string immat;
			string t_kilom = "";
			bool existe = true;
			cout << "Immatriculation : ";
			cin >> immat;
			Tools::stringToUpper(immat);
			if (!existe) {
				cout << "Retour impossible : véhicule inexistant !" << endl;
			} else {
				while (!Tools::estEntier(t_kilom)) {
					cout << "Entrez le nouveau kilométrage : ";
					cin >> t_kilom;
				}
				p.enregistrerRetour(Tools::stringToInt(t_kilom), immat);
			}
			break;	
		}
		case 0:{ // quitter
			cout << "Au revoir"<<endl;
			break;
		}
		default :{
			cout << "Choix invalide !"<<endl;
			break;
		}
	}
}
