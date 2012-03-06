#ifndef CDATE_H
#define CDATE_H

#include <string>
#include <iostream>
#include <time.h>
#include <cstdlib>

/*!
* \file CDate.h
* \brief Classe cdate
* \author Franck Ruby, Gilles Coulais, Icham Sirat
* \version 1.0
*/

/*! 
* \class CDate
* \brief Création et gestion de dates
*
*  Cette classe propose des outils pour gérer une date
*/

 
class CDate {
	private:
		int m_jour;
		int m_mois;
		int m_annee;

	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe date
		*
		*  \param aucun
		*/
		CDate();
		
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par copie de la classe date
		*
		*  \param [in] date CDate, une date
		*/
		CDate(const CDate& date);
		
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe date
		*
		*  \param [in] jour entier, le jour
		*  \param [in] mois entier, le mois
		*  \param [in] annee entier, l'année
		*/
		CDate(int jour, int mois, int annee);

		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe date
		* 
		*  \param aucun
		*/		
		~CDate();
		
		/*!
		*  \brief Accéder au jour
		*
		*  Permet d'obtenir le jour de la date
		*
		*  \param aucun
		*  \return un entier, le jour de la date
		*/		
		int getJour(){ return m_jour;}

		/*!
		*  \brief Accéder au mois
		*
		*  Permet d'obtenir le mois de la date
		*
		*  \param aucun
		*  \return un entier, le mois de la date
		*/		
		int getMois(){ return m_mois;}

		/*!
		*  \brief Accéder à l'année
		*
		*  Permet d'obtenir l'année de la date
		*
		*  \param aucun
		*  \return un entier, l'année de la date
		*/	
		int getAnnee(){ return m_annee;}
	
		/*!
		*  \brief Modifier jour
		*
		*  Permet de modifier le jour de la date
		*
		*  \param [in] jour entier, le nouveau jour
		*  \return void
		*/
		void setJour(int jour){ m_jour = jour;}
	
		/*!
		*  \brief Modifier mois
		*
		*  Permet de modifier le mois de la date
		*
		*  \param [in] mois entier, le nouveau mois
		*  \return void
		*/				
		void setMois(int mois){ m_mois = mois;}

		/*!
		*  \brief Modifier année
		*
		*  Permet de modifier l'année de la date
		*
		*  \param [in] annee entier, la nouvelle année
		*  \return void
		*/				
		void setAnnee(int annee){ m_annee = annee;}

		/*!
		*  \brief Accès à l'intitulé du mois
		*
		*  Permet de récupérer le nom du mois
		*
		*  \param aucun
		*  \return chaine de caractères, le nom du mois
		*/						
		string GetStrMois();
		
		/*!
		*  \brief Indique le nombre de jours du mois
		*
		*  Permet de connaitre le nombre de jours d'un mois par rapport à l'année.
		*  Appel de la fonction estBissextile 
		*
		*  \param [in] mois entier, le mois
		*  \param [in] annee entier, l'année
		*  \return un entier, le nombre de jours du mois
		*/								
		int nbJours (int mois, int annee);

		/*!
		*  \brief Indique si une année est bissextile
		*
		*  Permet de connaitre si une année est bissextile ou pas 
		*
		*  \param [in] annee entier, l'année
		*  \return bool, vrai si l'année est bissextile
		*  \return bool, faux si l'année n'est pas bissextile
		*/								
		bool estBissextile(int annee);
	    	
	   	/*!
		*  \brief Permet de valider une date
		*
		*  Vérifie si une année est valide ou pas 
		*
		*  \param [in] jour entier, le jour
		*  \param [in] mois entier, le mois
		*  \param [in] annee entier, l'année
		*  \return bool, vrai si la date est valide
		*  \return bool, faux si la date n'est pas valide
		*/
		bool validerDate( int jour, int mois, int annee);

		/*!
		*  \brief Égalité dates
		*
		*  Renvoie vrai si deux dates sont égales, faux sinon
		*
		*  \param [in] date Date, la date à comparer
		*  \return bool, vrai si les deux dates sont égales
		*  \return bool, faux si les deux dates sont différentes
		*/									    
		bool operator==(const CDate &date) const;
	   	 
		/*!
		*  \brief Infériorité dates
		*
		*  Renvoie vrai si la date passée en paramètre est inférieure
		*
		*  \param [in] date Date, la date à comparer
		*  \return bool, vrai si la date passée en paramètre est inférieure
		*  \return bool, faux si la date passée en paramètre n'est pas inférieure
		*/									    
		bool operator <(const CDate &date) const;

	    	/*!
		*  \brief Supériorité dates
		*
		*  Renvoie vrai si la date passée en paramètre est supérieure
		*
		*  \param [in] date Date, la date à comparer
		*  \return bool, vrai si la date passée en paramètre est supérieure
		*  \return bool, faux si la date passée en paramètre n'est pas supérieure
		*/									    
		bool operator >(const CDate &date) const;

		/*!
		*  \brief Date du jour
		*
		*  Renvoie la date du jour 
		*
		*  \param aucun
        *  \return CDate, la date du jour
		*/
		static CDate today();

		/*!
		*  \brief Afficher date
		*
		*  Affiche la date
		*
		*  \param aucun
		*  \return void
		*/								
		void afficher();
	
};
#endif
