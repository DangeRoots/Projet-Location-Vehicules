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
		*  \param inFile, fstream, le fichier contenant la liste des réservations
		*/
		ListeReservations (fstream &inFile);
		
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe ListeReservations
		*
		*  \param aucun
		*/
		ListeReservations();
		
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
		*  \param aucun
		*  \return void
		*/		
		// void ajouterRes ();
		
		/*!
		*  \brief Supprimer location
		*
		*  Permet de supprimer un véhicule du parc
		*
		*  \param loc, Location
		*  \return booléen, vrai si le véhicule a été trouvé et supprimé, faux sinon
		*/
		// bool supprimerLocation (Location loc);

		/*!
		*  \brief Modifier location
		*
		*  Permet de modifier une location du parc
		*
		*  \param loc, Location, la location à modifier
		*  \return void
		*/
		// void modifierLocation (Location loc);
		
		
		/*!
		*  \brief Rechercher location
		*
		*  Permet de rechercher une location dans le parc
		*
		*  \param type, caractères, le type de véhicule recherché : v pour vp, u pour utilitaire, c pour camion
		*  \param dateDepart, CDate, la date de début de location souhaitée
		*  \param dateRetour, CDate, la date de fin de location souhaitée
		*  \return un objet Location
		*/		
		//Location rechercherLocation(char type, CDate dateDepart, CDate dateRetour);
		
		/*!
		*  \brief Afficher liste complète
		*
		*  Affiche la liste complète des réservations
		*
		*  \param aucun
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
