using namespace std;

#include <Camion.h>

Camion::Camion(	float poids,
				float volume, 
				string immat, 
				string marque, 
				string modele)
					:Utilitaire(volume, immat,marque, modele) {
	m_poidsUtile = poids;
}

Camion::Camion():Utilitaire() {
	m_poidsUtile = 0;
}

Camion::~Camion() {
#ifdef DEBUG
	cout << "Destructeur de Camion" << endl;
#endif
}

float Camion::getPoidsUtile() {
	return m_poidsUtile;
}

void Camion::setPoidsUtile(float poids) {
	m_poidsUtile = poids;
}

void Camion::afficher() {
	Vehicule::afficher();
	cout << setw(10) << " " //éviter nbPlaces
		 << setw(10) << this->getVolumeUtile()
		 << setw(10) << m_poidsUtile;
}

void Camion::save(fstream &fs) {
	fs << "c " << getImmatriculation() << " " << getMarque() << " " <<  getModele() << " " << getVolumeUtile() << " " << m_poidsUtile << " ";
}
