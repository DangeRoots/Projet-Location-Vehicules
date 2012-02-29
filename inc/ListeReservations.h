#ifndef LISTERESERVATIONS_H
#define LISTERESERVATIONS_H

#include <iostream>
#include <fstream>
#include <list>

// #include <Location.h>
#include <Reservation.h>

/*!
 * \file ListeReservations.h
 * \brief Classe ListeReservations
 * 
 *  Cette classe permet de gérer la liste des réservations de véhicules
 * 
 * \author Gilles Coulais
 * \version 0.1
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
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe ListeReservations
		*
		*  \param aucun
		*/
		// ListeReservations();
		
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
		*  \brief Modifier réservation
		*
		*  Permet de modifier une réservation existante
		*
		*  \param [in,out] resa Reservation, la réservation à modifier
		*  \return bool vrai si la réservation a été modifiée
		*  \return bool faux si la réservation n'a pas pu être modifiée
		*/
		// void modifierReservation (Location loc);
		
		
		/*!
		*  \brief Rechercher réservation
		*
		*  Permet de rechercher une réservation dans la liste
		*
		*  \return Reservation une réservation
		*/		
		//Location rechercherLocation(char type, CDate dateDepart, CDate dateRetour);
		
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
		*  \param [in,out] outFile fstream, le fichier de sauvegarde
		*  \return void
		*/												
		void sauvegarder(fstream &outFile);
};

#endif
