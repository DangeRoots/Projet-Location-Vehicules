#ifndef LOCMENU_H
#define LOCMENU_H

#include <iostream>
#include <vector>
#include <cstdlib>

#include <Parc.h>
#include <CDate.h>
#include <Reservation.h>
#include <ListeReservations.h>
#include <Location.h>

/*!
 * \file LocMenu.h
 * \brief Classe LocMenu
 * 
 *  Cette classe permet de gérer le menu du logiciel de location
 * 
 * \author Gilles Coulais, Icham Sirat
 * \version 1.0
 */

class LocMenu {

	private:
			vector<string> entrees;		
			vector<string>::iterator menuI;

	public:
			
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe LocMenu
		*
		*  \param aucun
		*/
		LocMenu();

		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe LocMenu
		* 
		*  \param aucun
		*/				
		~LocMenu(); 

		/*!
		*  \brief Afficher la liste du menu
		*
		*  Affiche la liste du menu. Le numéro qui précède l'intitulé du choix est le numéro du choix.
		*
		*  \param aucun
		*  \return void
		*/				
		void afficher();

		/*!
		*  \brief Récupérer valeur utilisateur
		*
		*  Permet de récupérer une valeur entrée au clavier par l'utilisateur
		*
		*  \param [in] texte chaîne, le texte à afficher à l'utilisateur
		*  \return une chaîne de caractère
		*/				
		string recupererValeur(string texte);

		/*!
		*  \brief traiter choix
		*
		*  Traite le choix réalisé par l'utilisateur dans les options du menu
		*
		*  \param [in] choix entier, le choix de l'utilisateur
		*  \param [in,out] p Parc, un parc de véhicule
		*  \param [in,out] r ListeReservations, une liste de réservations
		*  \param [in] nomFichierVeh chaîne, le nom du fichier de sauvegarde des véhicules
		*  \param [in] nomFichierResa chaîne, le nom du fichier de sauvegarde des réservations
		*  \return void
		*/				
		void traiter(int choix, Parc &p, ListeReservations &r, string nomFichierVeh, string nomFichierResa);

};

#endif
