#ifndef CDATE_H
#define CDATE_H

/*!
 * \file CDate.h
 * \brief Classe cdate
 * 
 *  Cette classe propose des outils pour gérer une date
 * 
 * \author Franck Ruby, Gilles Coulais
 * \version 0.1
 */

// #include <string>

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
		*  \param date, CDate, une date
		*/
		CDate(const CDate& date);
		
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe date
		*
		*  \param jour, entier, le jour
		*  \param mois, entier, le mois
		*  \param annee, entier, l'année
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
		*  \return un entier
		*/		
		int GetJour();

		/*!
		*  \brief Accéder au mois
		*
		*  Permet d'obtenir le mois de la date
		*
		*  \param aucun
		*  \return un entier
		*/		
		int GetMois();
		
		/*!
		*  \brief Accéder à l'année
		*
		*  Permet d'obtenir l'année de la date
		*
		*  \param aucun
		*  \return un entier
		*/		
		int GetAnnee();
		
		/*!
		*  \brief Modifier jour
		*
		*  Permet de modifier le jour de la date
		*
		*  \param jour, entier, le jour
		*  \return void
		*/		
		void SetJour(int jour);
		
		/*!
		*  \brief Modifier mois
		*
		*  Permet de modifier le mois de la date
		*
		*  \param mois, entier, le mois
		*  \return void
		*/				
		void SetMois(int mois);
		
		/*!
		*  \brief Modifier année
		*
		*  Permet de modifier l'année de la date
		*
		*  \param annee, entier, l'année
		*  \return void
		*/				
		void SetAnnee(int annee);

		// void JourSuivant();   
		
		/*!
		*  \brief Accès à l'intitulé du mois
		*
		*  Permet de récupérer le nom du mois
		*
		*  \param aucun
		*  \return une chaine de caractères
		*/						
		std::string GetStrMois();
		
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
