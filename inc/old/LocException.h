#ifndef LOCEXCEPTION_H
#define LOCEXCEPTION_H

#include <iostream>
#include <exception>
#include <string>


/*!
 * \file LocException.h
 * \brief Classe LocException
 * 
 *  Cette classe permet de gérer des exceptions. 
 *  Elle dérive de la classe exception incluse dans la STL.
 * 
 * \author Icham Sirat
 * \version 0.1
 */ 
 
class LocException: public exception{
	private:
		int m_numero;               // Numéro de l'erreur.
		string m_phrase;            // Description de l'erreur.
		int m_niveau;               // Niveau de l'erreur.
    
	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe exception
		*
		*  \param numero, entier, numero d'exception
		*  \param phrase, chaîne de caractères, libellé de l'exception
		*  \param niveau, entier, niveau de l'exception
		*/
		LocException (int numero, string const& phrase, int niveau) 
					throw();//:m_numero(numero),m_phrase(phrase),m_niveau(niveau);
		
		/*!
		 *  \fn virtual const char* what() const throw()
		 *  \brief Récupérer le libellé de l'exception
		 *
		 *  Renvoie le libellé de l'exception
		 *
		 *  \param none
		 *  \return chaîne de caractère, le libellé de l'exception
		 */		
		virtual const char* what() const throw();

		/*!
		 *  \fn int getNiveau() const throw()
		 *  \brief Récupérer le niveau de l'exception
		 *
		 *  Renvoie le niveau de l'exception
		 *
		 *  \param none
		 *  \return entier le niveau de l'exception
		 */     
		int getNiveau() const throw();
		
		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe Erreur
		*/    
		virtual ~LocException() throw();

		LocException OpenFail (int numero=0, string const& phrase="", int niveau=0) 
		throw();//:m_numero(numero),m_phrase(phrase),m_niveau(niveau){
};

#endif
