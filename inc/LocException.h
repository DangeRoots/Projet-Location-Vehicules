#ifndef LOCEXCEPTION_H
#define LOCEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

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

//~ Commentaires particuliers
//~ Voici le prototype du catch standard
//~   catch(std::exception const& e){
//~  	cerr << "ERREUR : " << e.what() << endl;
//~   }
//~ Type d'exception dérivant de la STL Exception (J'ai pas encore compris =D)
//~ domain_error 		logique 	A Lancer s'il se produit une erreur de domaine mathématique.
//~ invalid_argument 	logique 	A Lancer si un des arguments d'une fonction est invalide.
//~ length_error 		logique 	A Lancer si un objet aura une taille invalide.(ex: classe Pile qui a une taille dépassant la taille de la mémoire).
//~ out_of_range 		logique 	A Lancer s'il y a une erreur avec un indice.(ex: On essaye d'accéder à une case inexistante d'un tableau).
//~ logic_error 		logique 	A Lancer lors de n'importe quel autre problème de logique du programme.
//~ range_error 		exécution 	A Lancer lors d'une erreur de domaine à l'exécution.
//~ overflow_error 		exécution 	A Lancer s'il y a une erreur d'overflow.
//~ underflow_error 	exécution 	A Lancer s'il y a une erreur d'underflow.
//~ runtime_error 		exécution 	A Lancer pour tout autre type d'erreur non-prévue survenant à l'exécution.

 
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
		LocException (int numero=0, string const& phrase="", int niveau=0) 
					throw() : m_numero(numero),m_phrase(phrase),m_niveau(niveau){
		}
		
		/*!
		 *  \fn virtual const char* what() const throw()
		 *  \brief Récupérer le libellé de l'exception
		 *
		 *  Renvoie le libellé de l'exception
		 *
		 *  \param none
		 *  \return chaîne de caractère, le libellé de l'exception
		 */		
		virtual const char* what() const throw(){
			return m_phrase.c_str();
		}

		/*!
		 *  \fn int getNiveau() const throw()
		 *  \brief Récupérer le niveau de l'exception
		 *
		 *  Renvoie le niveau de l'exception
		 *
		 *  \param none
		 *  \return entier le niveau de l'exception
		 */     
		int getNiveau() const throw(){
			return m_niveau;
		}
		
		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe Erreur
		*/    
		virtual ~Erreur() throw(){
		}
};

#endif
