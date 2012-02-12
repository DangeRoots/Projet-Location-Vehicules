#ifndef LOCATION_H
#define LOCATION_H

/*!
 * \file Location.h
 * \brief Classe Location
 * 
 *  Cette classe permet de gérer la location d'un véhicule
 * 
 * \author Gilles Coulais, Icham Sirat
 * \version 0.1
 */

class Location {
	private:
		Vehicule m_vehicule;
		CDate m_dateDepart;
		CDate m_dateRetourPrevu;
		CDate m_dateRetourReel;
		int m_kilometreDepart;
		int m_kilometreRetour;
		// int nbLocation; // Nombre de fois où le véhicule a été loué

	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe Location
		*
		*  \param aucun
		*/
		Location();

		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Location
		*
		*  \param vehicule, objet Vehicule, le véhicule à louer
		*  \param dateDepart, objet CDate, la date de début de location, NULL si le véhicule n'est pas loué
		*  \param dateRetourPrevue, objet CDate, la date de fin prévue de la location, NULL si le véhicule n'est pas loué
		*  \param dateRetourReel, objet CDate, la date réelle du retour location, NULL si le véhicule n'est pas loué ou s'il est en cours de location
		*  \param kmDepart, entier, le kilométrage du véhicule au début de location
		*  \param kmRetour, entier, le kilométrage du véhicule au retour de location
		*/		
		Location(Vehicule vehicule, CDate dateDepart, CDate dateRetourPrevu, CDate dateRetourReel, int kmDepart, int kmRetour);
		
		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe Location
		* 
		*  \param aucun
		*/				
		~Location();
		
		/*!
		*  \brief Accéder au véhicule
		*
		*  Permet d'obtenir le véhicule à partir de son immatriculation
		*
		*  \param aucun
		*  \return un objet Vehicule
		*/		
		Vehicule getVehicule();

		/*!
		*  \brief Modifier véhicule
		*
		*  Permet de modifier le véhicule à partir de son immatriculation
		*
		*  \param veh, objet Vehicule, le nouveau véhicule
		*  \return void
		*/		
		void setVehicule(Vehicule veh);

		/*!
		*  \brief Accéder date début
		*
		*  Permet d'obtenir la date de début de location
		*
		*  \param aucun
		*  \return un objet CDate
		*/		
		CDate getDateDepart();

		/*!
		*  \brief Modifier date départ
		*
		*  Permet de modifier la date de départ du véhicule
		*
		*  \param date, objet CDate, la nouvelle date du départ
		*  \return void
		*/		
		void setDateDepart(CDate date);

		/*!
		*  \brief Accéder date retour prévue
		*
		*  Permet d'obtenir la date prévue de retour du véhicule
		*
		*  \param aucun
		*  \return un objet CDate
		*/		
		CDate getDateRetourPrevue();

		/*!
		*  \brief Modifier date retour prévue
		*
		*  Permet de modifier la date prévue de retour du véhicule
		*
		*  \param date, objet CDate, la nouvelle date de retour
		*  \return void
		*/		
		void setDateRetourPrevue(CDate date);

		/*!
		*  \brief Accéder date fin réelle
		*
		*  Permet d'obtenir la date de fin de location réelle
		*
		*  \param aucun
		*  \return un objet CDate
		*/		
		CDate getDateRetourReelle();

		/*!
		*  \brief Modifier date retour réelle
		*
		*  Permet de modifier la date de retour réelle 
		*
		*  \param date, objet CDate, la nouvelle date de retour réelle
		*  \return void
		*/		
		void setDateRetourReelle(CDate date);

		/*!
		*  \brief Récupérer le kilométrage de départ
		*
		*  Permet d'obtenir le kilométrage de départ de la location
		*
		*  \param void
		*  \return entier, le kilométrage de départ
		*/				
		int getKmDepart();

		/*!
		*  \brief Modifier kilométrage de départ
		*
		*  Permet de modifier le kilométrage de départ de la location
		*
		*  \param kilom, entier, le nouveau kilométrage de départ
		*  \return void
		*/
		void setKmDepart(int km);

		/*!
		*  \brief Modifier kilométrage retour
		*
		*  Permet d'obtenir le kilométrage retour de la location
		*
		*  \param none
		*  \return entier, le kilométrage de retour
		*/				
		int getKmRetour();

		/*!
		*  \brief Modifier kilométrage de retour
		*
		*  Permet de modifier le kilométrage de retour de la location
		*
		*  \param kilom, entier, le nouveau kilométrage de retour
		*  \return void
		*/
		void setKmRetour(int kilom);

		/*!
		*  \brief Afficher location
		*
		*  Affiche la location
		*
		*  \param aucun
		*  \return void
		*/								
		void afficher();
};

#endif
