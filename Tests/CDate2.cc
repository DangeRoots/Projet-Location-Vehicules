// Classe CDate Améliorée
// Auteur Sirat Icham 2011
// Projet Location
// Code à valider


#include <string>
#include <iostream>

using namespace std;

// Classe qui gère les dates avec test

class Date{
// Variables
	private:
		int m_Jour;
		int m_Mois;
		int m_Annee;
	public:
//Accesseurs
	int getJour(){ return m_Jour;}
	int getMois(){ return m_Mois;}
	int getAnnee(){ return m_Annee;}
	void setJour(int Jour){ m_Jour = Jour;}
	void setMois(int Mois){ m_Mois = Mois;}
	void setAnnee(int Annee){ m_Annee = Annee;}
// Constructeur Date
	Date(int j, int m, int a){
	m_Jour = j;
	m_Mois = m;
	m_Annee = a;
}

//----------------------------------------------------------------------
// Retourne le nombre de jour que contient un mois d'une année précise
	int nbJoursMois( int Mois, int Annee ){
	// Si c'est février, c'est exceptionel
		if( Mois == 2 )
			return ( estBissextile( Annee ) ? 29 : 28 );
	// Autre mois
		if (Mois == 1||Mois == 3||Mois == 5||Mois == 7||Mois == 8||Mois == 10||Mois ==12)
			return 31;
		else return 30;
}

//----------------------------------------------------------------------
// Retourne si une année est bissextile ou pas
// soit divisibles par 4 mais non divisibles par 100
// soit divisibles par 400.
bool estBissextile(int Annee){
		
		// Si l'année est divisible par 4, c'est une bissextile et 400
		if( (Annee %4 == 0 && Annee %100 != 0) ||
			(Annee % 400 == 0))
			return true;
		else 
			return false;
}

	//----------------------------------------------------------------------
	// Retourne si la date est valide
	bool validerDate( int Jour, int Mois, int Annee){	
		return (!(Mois < 0 || Mois > 12 || Jour < 0 || Jour > nbJoursMois(Mois,Annee)));
	}

	//----------------------------------------------------------------------
	void affichageStandard(){
		cout << m_Jour <<"/"<< m_Mois <<"/"<< m_Annee <<endl;
	}

	// renvoie vrai si deux dates sont égales
	bool operator==(const Date &date) const {
		return (m_Jour == date.m_Jour && m_Mois == date.m_Mois && m_Annee ==date.m_Mois);
	}
	
	// renvoie vrai si date est inférieur
	bool operator <(const Date &date) const {
		bool res = false;
		if ((date.m_Annee < m_Annee) ||
			(date.m_Annee == m_Annee && date.m_Mois < m_Mois) ||
			(date.m_Annee == m_Annee && date.m_Mois == m_Mois && date.m_Jour < m_Jour))
			res = true;
		return res;
	}
};
