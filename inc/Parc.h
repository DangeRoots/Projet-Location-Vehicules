#ifndef PARC_H
#define PARC_H

#include <iostream>
#include <fstream>
#include <list>

#include <Location.h>
#include <Vehicule.h>
#include <Camion.h>
#include <CDate.h>
#include <VP.h>


/*!
 * \file Parc.h
 * \brief Classe Parc
 * 
 *  Cette classe permet de gérer un parc de locations de véhicules
 * 
 * \author Gilles Coulais, Icham Sirat
 * \version 0.1
 */

class Parc {
	private:
		list<Location> m_parcAuto;
		list<Location>::iterator m_parcAutoI;
		void lectureDates(int &t_jDep, int &t_mDep,int &t_aDep,
							int &t_jRetP, int &t_mRetP,int &t_aRetP,
							int &t_jRetR, int &t_mRetR, int &t_aRetR,
							fstream &inFile);
	
	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Parc
		*
		*  \param inFile, fstream, le fichier contenant la liste des locations
		*/
		Parc (fstream &inFile);
		
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe Parc
		*
		*  \param aucun
		*/
		Parc();
		
		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe Parc
		* 
		*  \param aucun
		*/						
		~Parc ();
		
		/*!
		*  \brief Ajouter location
		*
		*  Permet d'ajouter un véhicule dans le parc
		*
		*  \param loc, Location
		*  \return booléen, vrai si la location a été ajoutée, faux sinon 
		*/		
		void ajouterLocation (Location loc);
		
		/*!
		*  \brief Supprimer location
		*
		*  Permet de supprimer un véhicule du parc
		*
		*  \param loc, Location
		*  \return booléen, vrai si le véhicule a été trouvé et supprimé, faux sinon
		*/
		bool supprimerLocation (Location loc);

		/*!
		*  \brief Modifier location
		*
		*  Permet de modifier une location du parc
		*
		*  \param loc, Location, la location à modifier
		*  \return void
		*/
		void modifierLocation (Location loc);
		
		
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
		*  Affiche la liste complète des véhicules du parc
		*
		*  \param aucun
		*  \return void
		*/				
		void afficher();
		
		/*!
		*  \brief Afficher véhicules loués
		*
		*  Affiche la liste des véhicules en cours de location entre deux dates
		*
		*  \param dateDebut, CDate, la date de début de location
		*  \param dateFin, CDate, la date de fin de location
		*  \return void
		*/						
		void afficherLoues (CDate dateDebut, CDate dateFin);
		
		/*!
		*  \brief Afficher véhicules disponibles
		*
		*  Affiche la liste des locations disponibles entre deux dates
		*
		*  \param dateDebut, CDate, la date de début de location souhaitée
		*  \param dateFin, CDate, la date de fin de location souhaitée
		*  \return void
		*/								
		void afficherDisponibles (CDate dateDebut, CDate dateFin);
		
		/*!
		*  \brief Afficher véhicules restituables
		*
		*  Affiche la liste des locations dont la date de retour prévue est égale ou inférieure à la date du jour
		*
		*  \param today, CDate, la date de consultation de la liste
		*  \return void
		*/										
		void afficherRestituables(CDate today);
		
		/*!
		*  \brief Sauvegarder parc
		*
		*  Sauvegarde la liste des locations sur disque
		*
		*  \param aucun
		*  \return void
		*/												
		bool sauvegarderParc();
};

#endif
