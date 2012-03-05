#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include <fstream>
#include <CDate.h>
#include <Parc.h>

/*!
 * \file Reservation.h
 * \brief Classe Reservation
 * 
 *  Cette classe permet de gérer une réservation de véhicule comprennant une immatriculation permettant l'identification du véhicule, la date de départ et la date de retour
 * 
 * \author Gilles Coulais
 * \version 1.0
 */

class Reservation {
	private :
		string m_vehicule;
		CDate m_dateDepart, m_dateRetour;
		
	public :
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Reservation
		*
		*  \param [in] veh string, l'immatriculation du véhicule
		*  \param [in] dateDep CDate, la date de début de réservation
		*  \param [in] dateRet CDate, la date de fin de réservation
		*/
		Reservation (string veh, CDate dateDep, CDate dateRet);
		
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe Reservation
		*
		*  \param aucun
		*/
		Reservation();
		
		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe Reservation
		* 
		*  \param aucun
		*/						
		~Reservation();
		
		/*!
		*  \brief Modifier date
		*
		*  Permet de modifier les dates d'une réservation
		*
		*  \param [in] type char, le type de date : d pour départ, r pour retour
		*  \param [in] newDate CDate, la nouvelle date
		*  \return void
		*/		
		void setDate (char type, CDate newDate);

		/*!
		*  \brief Obtenir date
		*
		*  Permet d'obtenir une date liée à une réservation
		*
		*  \param [in] type char, le type de date : d pour départ, r pour retour
		*  \return CDate la date recherchée
		*/		
		CDate getDate (char type);

		/*!
		*  \brief Afficher resservation
		*
		*  Affiche une réservation, en récupérant les caractéristiques du véhicule dans le parc passé en paramètre
		*
		*  \param [in] p Parc, le parc à explorer. Les informations sur les véhicules doivent être stockées dans une instance de la classe Parc
		*  \return void
		*/
		void afficher(Parc p);
		
		/*!
		*  \brief Sauvegarder réservation
		*
		*  Sauvegarde la réservation
		*
		*  \param [in,out] outFile fstream, le fichier de sauvegarde
		*  \return void
		*/												
		void save(fstream &outFile);

		/*!
		*  \brief Vérifie disponibilité
		*
		*  Vérifie la disponibilité du véhicule dans la période comprise en deux dates
		*
		*  \param [in] dep CDate, la date de départ souhaitée
		*  \param [in] ret CDate, la date de retour souhaitée
		*  \return bool vrai si le véhicule est disponible
		*  \return bool faux si le véhicule est indisponible
		*/														
		bool estDisponible(CDate dep, CDate ret);
		
		/*!
		*  \brief Obtenir véhicule
		*
		*  Renvoie le véhicule lié à la réservation
		*
		*  \param none
		*  \return string l'immatriculation du véhicule
		*/														
		string getVehicule();

		/*!
		*  \brief Réservations égales
		*
		*  Vérifie si deux réservations sont identiques
		*
		*  \param [in,out] res Reservation, la réservation à comparer
		*  \return bool vrai si les deux réservations sont identiques (même véhicule et mêmes dates de départ et retour)
		*  \return bool faux si les deux réservations sont différentes.
		*/																
		bool operator==(Reservation &res) const;
};

#endif
