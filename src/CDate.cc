#include <string>
#include <iostream>

using namespace std;

#include <CDate>

CDate::CDate(){
	m_jour = 1;
	m_mois = 1;
	m_annee = 2002;	
}

CDate::CDate(const CDate& date){
	m_jour = date.m_jour;
	m_mois = date.m_mois;
	m_annee = date.m_annee;	
}

CDate::CDate(int jour, int mois, int annee){
	m_jour = jour;
	m_mois = mois;
	m_annee = annee;
}

CDate::~CDate(){}

std::string CDate::GetStrMois(){
    string tab[12]={"Janvier","Février","Mars","Avril","Mai","Juin",
		  "Juillet","Aout","Septembre","Octobre","Novembre","Décembre"};
  return tab[m_mois-1];
}

int CDate::nbJours (int mois, int annee){
	// Si c'est février, c'est exceptionel
		if( mois == 2 )
			return ( estBissextile(annee) ? 29 : 28 );
	// Autre mois
		if (mois == 1||mois == 3||mois == 5||mois == 7||mois == 8||mois == 10||mois ==12)
			return 31;
		else return 30;
}

bool CDate::estBissextile(int annee){
	// Si l'année est divisible par 4, et non par 100 = ok
	if( annee %4 == 0 && annee %100 != 0)
		return true;
	// Sinon par 400 = ok
	else if ( annee % 400 == 0)
		return true;
	else 
		return false;
}

bool CDate::operator==(const Date &date) const {
	return (m_Jour == date.m_Jour && m_Mois == date.m_Mois && m_Annee ==date.m_Mois);
}

bool CDate::operator <(const Date &date) const {
	bool res = false;
	if ((date.m_Annee < m_Annee) ||
		(date.m_Annee == m_Annee && date.m_Mois < m_Mois) ||
		(date.m_Annee == m_Annee && date.m_Mois == m_Mois && date.m_Jour < m_Jour))
		res = true;
	return res;
}

bool CDate::operator >(const Date &date) const {
}

bool CDate::operator <=(const Date &date) const {
	return (this < date || this == date);
}

bool CDate::operator >=(const Date &date) const {
	return (this > date || this == date);
}

bool CDate::validerDate( int jour, int mois, int annee){
	return (!(Mois < 0 || Mois > 12 || Jour < 0 || Jour > nbJoursMois(Mois,Annee)));	
}

void CDate::afficher(){
	cout << m_jour <<"/"<< m_mois <<"/"<< m_annee <<endl;
}

