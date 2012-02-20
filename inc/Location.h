#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <Vehicule.h>
#include <CDate.h>
#include <Erreur.h>

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
		Vehicule *m_vehicule;
		CDate m_dateDepart;
		CDate m_dateRetourPrevu;
		CDate m_dateRetourReel;

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
		*  \param vehicule, un pointeur de véhicule
		*  \param dateDepart, objet CDate, la date de début de location, NULL si le véhicule n'est pas loué
		*  \param dateRetourPrevue, objet CDate, la date de fin prévue de la location, NULL si le véhicule n'est pas loué
		*  \param dateRetourReel, objet CDate, la date réelle du retour location, NULL si le véhicule n'est pas loué ou s'il est en cours de location
		*/		
		// Location(Vehicule vehicule, CDate dateDepart, CDate dateRetourPrevu, CDate dateRetourReel);
		Location(Vehicule *vehicule, CDate dateDepart, CDate dateRetourPrevu, CDate dateRetourReel);
		
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
		*  \return un pointeur vers un objet Vehicule
		*/		
		// Vehicule getVehicule();
		Vehicule* getVehicule();

		/*!
		*  \brief Modifier véhicule
		*
		*  Permet de modifier le véhicule à partir de son immatriculation
		*
		*  \param veh, un pointeur vers un objet Vehicule, le nouveau véhicule
		*  \return void
		*/		
		// void setVehicule(Vehicule veh);
		void setVehicule(Vehicule *veh);

		/*!
		*  \brief Accéder date début
		*
		*  Permet d'obtenir les dates associées à la location : date de départ, date de retour prévu, date de retour réel
		*
		*  \param type, caractère, le type de date souhaité : d pour dateDepart, r pour dateRetourReel, p pour dateRetourPrevu
		*  \return un objet CDate
		*  \exception si type différent de "d", "r", ou "p", lance une erreur "erreur(1) mauvais type de date" 
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
		*  \exception si type différent de "d", "r", ou "p", lance une erreur "erreur(1) mauvais type de date" 
		*/		
		void setDate(CDate date, char type);

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
