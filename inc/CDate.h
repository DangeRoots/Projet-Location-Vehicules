#ifndef CDATE_H
#define CDATE_H

/*!
 * \file CDate.h
 * \brief Classe cdate
 * 
 *  Cette classe propose des outils pour gérer une date
 * 
 * \author Franck Ruby, Gilles Coulais, Icham Sirat
 * \version 0.3
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
		int getJour(){ return m_jour;}

		/*!
		*  \brief Accéder au mois
		*
		*  Permet d'obtenir le mois de la date
		*
		*  \param aucun
		*  \return un entier
		*/		
		int getMois(){ return m_mois;}

		/*!
		*  \brief Accéder à l'année
		*
		*  Permet d'obtenir l'année de la date
		*
		*  \param aucun
		*  \return un entier
		*/	
		int getAnnee(){ return m_annee;}
	
		/*!
		*  \brief Modifier jour
		*
		*  Permet de modifier le jour de la date
		*
		*  \param jour, entier, le jour
		*  \return void
		*/
		void setJour(int jour){ m_jour = jour;}
	
		/*!
		*  \brief Modifier mois
		*
		*  Permet de modifier le mois de la date
		*
		*  \param mois, entier, le mois
		*  \return void
		*/				
		void setMois(int mois){ m_mois = mois;}

		/*!
		*  \brief Modifier année
		*
		*  Permet de modifier l'année de la date
		*
		*  \param annee, entier, l'année
		*  \return void
		*/				
		void setAnnee(int annee){ m_annee = annee;}

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
		*  \brief Indique le nombre de jours du mois
		*
		*  Permet de connaitre le nombre de jours d'un mois par rapport à l'année.
		*  Appel de la fonction estBissextile 
		*
		*  \param mois, entier, le mois
		*  \param annee, entier, l'année
		*  \return un entier
		*/								
		int nbJours (int mois, int annee);

		/*!
		*  \brief Indique si une année est bissextile
		*
		*  Permet de connaitre si une année est bissextile ou pas 
		*
		*  \param annee, entier, l'année
		*  \return bool
		*/								
	    	bool estBissextile(int annee);
	    	
	   	/*!
		*  \brief Permet de valider une date
		*
		*  Vérifie si une année est valide ou pas 
		*
		*  \param jour, entier, le jour
		*  \param mois, entier, le mois
		*  \param annee, entier, l'année
		*  \return bool
		*/
	    	bool validerDate( int jour, int mois, int annee);

		/*!
		*  \brief Égalité dates
		*
		*  Renvoie vrai si deux dates sont égales, faux sinon
		*
		*  \param date, objet Date, la date à comparer
		*  \return bool
		*/									    
	    	bool operator==(const CDate &date) const;
	   	 
		/*!
		*  \brief Infériorité dates
		*
		*  Renvoie vrai si la date passée en paramètre est inférieure
		*
		*  \param date, objet Date, la date à comparer
		*  \return bool
		*/									    
	    	bool operator <(const CDate &date) const;

	    	/*!
		*  \brief Supériorité dates
		*
		*  Renvoie vrai si la date passée en paramètre est supérieure
		*
		*  \param date, objet Date, la date à comparer
		*  \return bool
		*/									    
	    	bool operator >(const CDate &date) const;

	    	/*!
		*  \brief Infériorité égalité dates
		*
		*  Renvoie vrai si la date passée en paramètre est inférieure ou égale
		*
		*  \param date, objet Date, la date à comparer
		*  \return bool
		*/									    
	    	bool operator <=(const CDate &date) const;

	    	/*!
		*  \brief Supériorité égalité dates
		*
		*  Renvoie vrai si la date passée en paramètre est supérieure ou égale
		*
		*  \param date, objet Date, la date à comparer
		*  \return bool
		*/									    
	    	bool operator >=(const CDate &date) const;

		/*!
		*  \brief Date du jour
		*
		*  Renvoie la date du jour 
		*
		*  \param aucun
                *  \return CDate, la date du jour
		*/
		CDate today();

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
