#ifndef LISTERESERVATIONS_H
#define LISTERESERVATIONS_H

#include <iostream>
#include <fstream>
#include <list>

#include <Reservation.h>

/*!
* \file ListeReservations.h
* \brief Classe ListeReservations
* \author Gilles Coulais, Icham Sirat
* \version 1.0
*/

/*! 
* \class ListeReservations
* \brief Création de listes de réservations de véhicules
*
*  Cette classe permet de gérer la liste des réservations de véhicules
*/

class ListeReservations {
	private:
		list<Reservation> m_listeReservations;
		list<Reservation>::iterator m_listeReservationsI;
		
	public:
	
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe ListeReservations
		*
		*  \param [in,out] inFile fstream, le fichier contenant la liste des réservations
		*/
		ListeReservations (fstream &inFile);
				
		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe ListeReservations
		* 
		*  \param aucun
		*/						
		~ListeReservations();
		
		/*!
		*  \brief Ajouter réservation
		*
		*  Permet d'ajouter une réservation à la liste
		*
		*  \param [in] res Reservation, la réservation à ajouter
		*  \return bool vrai si la réservation a été ajoutée à la liste
		*  \return bool faux si la réservation n'a pas pu être ajoutée à la liste
		*/		
		bool ajouterReservation (Reservation res);
		
		/*!
		*  \brief Afficher liste complète
		*
		*  Affiche la liste des réservations. La liste affichée peut contenir toutes les réservations, les réservations dont la date de départ est égale à date ou les véhicules restituables. Sont considérés restituables tous les véhicules dont la date de retour est celle du jour courant.
		*
		*  \param [in] p Parc, le parc de véhicule dans lequel rechercher les informations sur les véhicules réservés
		*  \return void
		*/				
		void afficher(Parc p);
		
		/*!
		*  \brief Sauvegarder liste réservations
		*
		*  Sauvegarde la liste des réservations dans un fichier
		*
		*  \param [in,out] nomFichier string, le nom du fichier de sauvegarde
		*  \return void
		*/												
		void sauvegarder(string nomFichier);
};

#endif
