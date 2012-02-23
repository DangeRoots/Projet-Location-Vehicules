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
	cout << "Destructeur de Camion" << endl;
}

float Camion::getPoidsUtile() {
	return m_poidsUtile;
}

void Camion::setPoidsUtile(float poids) {
	m_poidsUtile = poids;
}

void Camion::afficher() {
	Utilitaire::afficher();
	cout << "Poids : " << m_poidsUtile << endl;
}
