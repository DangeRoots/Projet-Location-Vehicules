#ifndef PARC_H
#define PARC_H

#include <iostream>
#include <fstream>
#include <list>

#include <Location.h>
#include <Camion.h>
#include <Utilitaire.h>
#include <VP.h>
#include <Tools.h>

/*!
 * \file Parc.h
 * \brief Classe Parc
 * 
 *  Cette classe permet de gérer un parc de locations de véhicules
 * 
 * \author Gilles Coulais, Icham Sirat
 * \version 0.2
 */

class Parc {
	private:
		list<Location> m_parcAuto;
		list<Location>::iterator m_parcAutoI;
		void entrerTypeVeh(string &t);
		void entrerImmat(string &i);
		void entrerMarqueModele(string &t_ma, string &t_mo);
		void entrerKilometrage(int &t_k);
		void entrerVolumeUtile(float &t_v);
		void entrerPoidsUtile(float &t_p);
		void entrerNbPlaces(int &t_nbP);
		
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
		void ajouterLocation ();

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
		bool estDansLeParc(string immat, Location &loc);
		
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
		*  \brief Sauvegarder parc
		*
		*  Sauvegarde le parc dans un fichier
		*
		*  \param [in,out] nomFichier string, le nom du fichier de sauvegarde
		*  \return void
		*/												
		void sauvegarder(string nomFichier);

		/*!
		*  \brief Enregistrer retour
		*
		*  Enregistre le retour d'une location
		*
		*  \param [in] kilom entier, le kilométrage au retour du véhicule
		*  \return void
		*/														
		void enregistrerRetour(int kilom, string immat);

		/*!
		*  \brief Rechercher location
		*
		*  Renvoie un itérateur sur la position d'une location, dont l'immatriculation est donnée en argument.
		*
		*  \param [in] immat string, l'immatriculation du véhicule recherché
		*  \return un itérateur de Location
		*/													
		list<Location>::iterator rechercherLocation(string immat);
};

#endif
