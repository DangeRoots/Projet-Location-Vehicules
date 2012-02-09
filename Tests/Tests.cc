#include <iostream>
#include <list>

using namespace std;

class Personne {
	private:
		string m_nom;
		int m_age;
	public:
		Personne(string nom, int age) {
			m_nom = nom;
			m_age = age;
		}
		
		string getNom() {
			return m_nom;
		}
		
		int getAge() {
			return m_age;
		}
		
		friend ostream &operator<<(ostream &output, const Personne &pers) {
			output << pers.m_nom << ' ' << pers.m_age << " an(s)" << endl;
			return output;
		}
		
		bool operator==(const Personne &pers) const {
			return (m_nom == pers.m_nom && m_age == pers.m_age);
		}
		
		void afficher() {
			if (m_age < 2)
				cout << m_nom << ", " << m_age << " an." << endl;
			else
				cout << m_nom << ", " << m_age << " ans." << endl;
		}
};

int main() {
	// Création d'une liste d'entiers et insertions de valeurs
	list<int> maListeEntier;
	maListeEntier.push_front(2);
	maListeEntier.push_front(1);
	maListeEntier.push_front(0);
	maListeEntier.push_back(3);
	maListeEntier.push_back(4);
	maListeEntier.push_back(5);
	maListeEntier.push_back(6);
	
	// Création d'un itérateur pour parcourir la liste d'entiers
	list<int>::iterator i;
	// Parcours de la liste d'entiers
	for (i = maListeEntier.begin(); i != maListeEntier.end(); i++) {
		cout << *i << endl;
	}
	
	cout << "------------------------" << endl;
	
	// Création d'une liste de personnes et insertions d'objets
	list<Personne> maListePersonne;
	Personne p("Jean", 20);
	Personne p4("Petit", 1);
	Personne p2("Pierre", 30);
	Personne p3("Jacques", 45);
	Personne p5("Jacques", 45);
	maListePersonne.push_back(p);
	maListePersonne.push_back(p2);
	maListePersonne.push_front(p3);
	maListePersonne.push_back(p4);
	maListePersonne.push_back(p5);
	
	// Création d'un itérateur pour parcourir la liste de personnes	
	list<Personne>::iterator pers;
	
	cout << "Parcours de la liste de personnes" << endl;
	for (pers = maListePersonne.begin(); pers != maListePersonne.end(); pers++) {
		(*pers).afficher();
	}
	cout << "------------------------" << endl;

	cout << "Parcours de la liste de personnes avec opérateur << surchargé" << endl;
	// Parcours de la liste de personnes avec opérateur surchargé
	for (pers = maListePersonne.begin(); pers != maListePersonne.end(); pers++) {
		cout << *pers;
	}
	cout << "------------------------" << endl;
	
	cout << "Afficher Jacques uniquement" << endl;
	// Afficher Jacques uniquement
	for (pers = maListePersonne.begin(); pers != maListePersonne.end(); pers++) {
		if ((*pers).getNom()=="Jacques")
			(*pers).afficher();
	}
	cout << "------------------------" << endl;

	cout << "Afficher les personnes entre 20 et 30 ans" << endl;
	// Afficher uniquement les personnes entre 20 et 30 ans
	for (pers = maListePersonne.begin(); pers != maListePersonne.end(); pers++) {
		if ((*pers).getAge()>=20 && (*pers).getAge()<=30)
			pers->afficher();
	}
	
	cout << "------------------------" << endl;
	cout << "Utilisation de l'opérateur de comparaison surchargé" << endl;
	cout << "P5 = " << p5;
	cout << "P3 = " << p3;
	if (p3 == p5)
		cout << "P3 et P5 sont égaux" << endl;
	else
		cout << "P3 et P5 ne sont pas égaux" << endl;
		
	cout << "P3 = " << p3;
	cout << "P4 = " << p4;
	if (p4 == p5)
		cout << "P4 et P3 sont égaux" << endl;
	else
		cout << "P4 et P3 ne sont pas égaux" << endl;
}
