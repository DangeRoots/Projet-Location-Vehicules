#include <string>
#include <iostream>

using namespace std;

#include <CDate.h>

CDate::CDate(){
	m_jour = 0;
	m_mois = 0;
	m_annee = 0;	
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

bool CDate::operator==(const CDate &date) const {
	return (m_jour == date.m_jour && m_mois == date.m_mois && m_annee == date.m_annee);
}

bool CDate::operator<(const CDate &date) const {
	bool res = false;
	if ((date.m_annee < m_annee) ||
		(date.m_annee == m_annee && date.m_mois < m_mois) ||
		(date.m_annee == m_annee && date.m_mois == m_mois && date.m_jour < m_jour))
		res = true;
	return res;
}

bool CDate::operator>(const CDate &date) const {
	bool res = false;
	if ((date.m_annee > m_annee) ||
		(date.m_annee == m_annee && date.m_mois > m_mois) ||
		(date.m_annee == m_annee && date.m_mois == m_mois && date.m_jour > m_jour))
		res = true;
	return res;
}
/*
bool CDate::operator <=(const CDate &date) const {
	return (this < date || this == date);
}

bool CDate::operator >=(const CDate &date) const {
	return (this > date || this == date);
}
* */

bool CDate::validerDate( int jour, int mois, int annee){
	return (!(mois < 0 || mois > 12 || jour < 0 || jour > nbJours(mois,annee)));	
}

void CDate::afficher(){
	cout << m_jour <<"/"<< m_mois <<"/"<< m_annee <<endl;
}

