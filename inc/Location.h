#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <fstream>
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
		int m_kilometrage;

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
		*  Constructeur par copie de la classe Location
		*
		*  \param aucun
		*/
		Location(const Location &loc);

		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Location
		*
		*  \param [in] vehicule Pointeur de véhicule, le véhicule de la location
		*  \param [in] kilometrage entier, le kilométrage du véhicule
		*/		
		Location(Vehicule *vehicule, int kilometrage);
		
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
		Vehicule* getVehicule();

		/*!
		*  \brief Modifier véhicule
		*
		*  Permet de modifier le véhicule à partir de son immatriculation
		*
		*  \param veh, un pointeur vers un objet Vehicule, le nouveau véhicule
		*  \return void
		*/		
		void setVehicule(Vehicule *veh);

		/*!
		*  \brief Modifier kilométrage
		*
		*  Permet de modifier le kilométrage du véhicule
		*
		*  \param [in] kilom entier, le nouveau kilométrage
		*  \return void
		*/		
		void setKilom(int kilom);

		/*!
		*  \brief Afficher location
		*
		*  Affiche la location
		*
		*  \param aucun
		*  \return void
		*/								
		void afficher();
		
		/*!
		*  \brief Locations identiques
		*
		*  Permet de savoir si deux locations sont identiques
		*
		*  \param [in] loc Location, la location à comparer
		*  \return true si elles sont identiques
		*  \return false si elles sont différentes
		*/										
		bool operator==(Location &loc);
		
		// Sauvegarde
		void save(fstream &inFile);
		// void save();
};

#endif
