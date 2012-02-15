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
		// int m_kilometreDepart;
		// int m_kilometreRetour;
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
		*  \param km, entier, le kilométrage du véhicule
		*/		
		// Location(Vehicule vehicule, CDate dateDepart, CDate dateRetourPrevu, CDate dateRetourReel, int km);
		Location(Vehicule vehicule, CDate dateDepart, CDate dateRetourPrevu, CDate dateRetourReel);
		
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
		*  Permet d'obtenir les dates associées à la location : date de départ, date de retour prévu, date de retour réel
		*
		*  \param type, caractère, le type de date souhaité : d pour dateDepart, r pour dateRetourReel, p pour dateRetourPrevu
		*  \return un objet CDate
		*/		
		CDate getDate(char type);

		/*!
		*  \brief Modifier date
		*
		*  Permet de modifier les dates associées à la location : date de départ, date de retour prévu, date de retour réel
		*
		*  \param date, objet CDate, la nouvelle date
		*  \param type, caractère, le type de date à modifier : d pour dateDepart, r pour dateRetourReel, p pour dateRetourPrevu
		*  \return void
		*/		
		void setDate(CDate date, char type);

		/*!
		*  \brief Récupérer kilométrage
		*
		*  Permet d'obtenir le kilométrage de départ ou retour du véhicule
		*
		*  \param type, caractère, le type de kilométrage souhaité : d pour départ, r pour retour
		*  \return entier, le kilométrage
		*/				
		// int getKilometrage(char type);

		/*!
		*  \brief Modifier kilométrage
		*
		*  Permet de modifier le kilométrage départ ou retour du véhicule
		*
		*  \param km, entier, le nouveau kilométrage de départ
		*  \param typ, caractère, le type de kilométrage à modifier, d pour départ, r pour retour
		*  \return void
		*/
		// void setKilometrage(int km, char type);

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
