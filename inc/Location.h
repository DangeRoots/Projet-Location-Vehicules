#ifndef LOCATION_H
#define LOCATION_H

/*!
 * \file Location.h
 * \brief Classe Location
 * 
 *  Cette classe permet de gérer un véhicule du parc
 * 
 * \author Gilles Coulais, Icham Sirat
 * \version 0.1
 */

class Location {
	private:
		Vehicule vehicule;
		Date dateDepart;
		Date dateRetourPrevu;
		Date dateRetourReel;
		int kilometreDepart;
		int kilometreRetour;
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
		*  \param dateDebut, objet Date, la date de début de location, NULL si le véhicule n'est pas loué
		*  \param dateFinPrevue, objet Date, la date de fin prévue de la location, NULL si le véhicule n'est pas loué
		*  \param kmDebut, entier, le kilométrage du véhicule au début de location
		*/		
		Location(Vehicule vehicule, Date dateDebut, Date dateFinPrevue, int kmDebut);
		
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
		*  \brief Accéder date début
		*
		*  Permet d'obtenir la date de début de location
		*
		*  \param aucun
		*  \return un objet Date
		*/		
		Date getDateDebut();

		/*!
		*  \brief Accéder date fin prévue
		*
		*  Permet d'obtenir la date de fin de location prévue
		*
		*  \param aucun
		*  \return un objet Date
		*/		
		Date getDateFinPrevue();

		/*!
		*  \brief Accéder date fin réelle
		*
		*  Permet d'obtenir la date de fin de location réelle
		*
		*  \param aucun
		*  \return un objet Date
		*/		
		Date getDateFinReelle();
		
		void setDateDebut(Date dateDebut);
		void setDateFinPrevue(Date dateFin);
		
		int getKmDebut();
		int getKmFin();
		void setKmDebut(int km);
		void setKmFin(int km);

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
